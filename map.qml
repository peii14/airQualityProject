import QtQuick 2.0
import QtQuick.Window 2.0
import QtLocation 5.6
import QtPositioning 5.6


Rectangle {
            width: 1500
            height: 1000
            visible: true
            //Components

            property string hostingKey: "RolYgK0ohJbUthcvDoYd"
            Plugin {
                id: mapPluginRaster
                name: "osm"
                // "mapboxgl", "esri", ...
                // PluginParameter { name: "osm.mapping.offline.directory"; value: "//offlinemaps directory" }
                PluginParameter { name: "osm.useragent"; value: "QML PROJECT BARUNASTRA" }
                PluginParameter { name: "osm.mapping.host"; value: "http://osm.tile.server.address/" }
                PluginParameter { name: "osm.mapping.copyright"; value: "All mine" }
                PluginParameter { name: "osm.routing.host"; value: "http://osrm.server.address/viaroute" }
                PluginParameter { name: "osm.geocoding.host"; value: "http://geocoding.server.address" }
//                id: mapPluginRaster
//                   name: "mapboxgl"
//                   PluginParameter {
//                       name: "mapboxgl.mapping.additional_style_urls"
//                       value: "https://api.maptiler.com/maps/hybrid/style.json?key="+hostingKey

//                   }
                }

            Map {
                id: mapview
                anchors.fill: parent
                plugin: mapPluginRaster
                center: QtPositioning.coordinate(-7.286460463054833, 112.79596433586721) // danau 8
                zoomLevel: 20

                gesture.enabled: true
                gesture.acceptedGestures: MapGestureArea.PinchGesture | MapGestureArea.PanGesture

                property int markerCounter: 0 // counter for total amount of markers
                property int currentMarker
                property int lastX : -1
                property int lastY : -1
                property int pressX : -1
                property int pressY : -1
                property int jitterThreshold : 10

                    // ---------------------------------

                MapItemView{
                    model: marker_model
                    delegate: MapCircle{
                        center: model.position
                        border.color: 'black'
                        color: 'black'
                        radius: 1
                    }

                }

                        MouseArea {
                        id: mouseArea
                        property variant lastCoordinate
                        property var circle
                        anchors.fill: parent
                        acceptedButtons: Qt.LeftButton | Qt.RightButton
//                        property var circle;
                        onPressed : {
                            mapview.lastX = mouse.x
                            mapview.lastY = mouse.y
                            mapview.pressX = mouse.x
                            mapview.pressY = mouse.y
                            lastCoordinate = mapview.toCoordinate(Qt.point(mouse.x, mouse.y))
                        }

                        onPositionChanged: {
                            if (mouse.button == Qt.LeftButton) {
                                mapview.lastX = mouse.x
                                mapview.lastY = mouse.y
                            }
                        }

                        onDoubleClicked: {
                            var mouseGeoPos = mapview.toCoordinate(Qt.point(mouse.x, mouse.y));
                            var preZoomPoint = mapview.fromCoordinate(mouseGeoPos, false);
                            if (mouse.button === Qt.LeftButton) {
                                mapview.zoomLevel = Math.floor(mapview.zoomLevel + 1)
                            } else if (mouse.button === Qt.RightButton) {
                                mapview.zoomLevel = Math.floor(mapview.zoomLevel - 1)
                            }
                            var postZoomPoint = mapview.fromCoordinate(mouseGeoPos, false);
                            var dx = postZoomPoint.x - preZoomPoint.x;
                            var dy = postZoomPoint.y - preZoomPoint.y;

                            var mapCenterPoint = Qt.point(mapview.width / 2.0 + dx, mapview.height / 2.0 + dy);
                            mapview.center = mapview.toCoordinate(mapCenterPoint);

                            lastX = -1;
                            lastY = -1;
                                        }

                        onPressAndHold:{
                            var coordinate = mapview.toCoordinate(Qt.point(mouse.x,mouse.y))
//                            circle = mapCircleComponent.createObject(mapview,{"center.latitude": coordinate.latitude,"center.longitude": coordinate.longitude});
//                            mapview.addMapItem(circle);
                            marker_model.addMarker(coordinate)
                            console.log(coordinate);

                            }

                        }

            }

}


