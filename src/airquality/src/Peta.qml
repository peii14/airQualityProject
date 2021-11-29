import QtQuick 2.0
import QtQuick.Window 2.0
import QtLocation 5.6
import QtPositioning 5.6


Rectangle {
            width: 1500
            height: 1000
            visible: true
            function addMarker(latitude, longitude, heading)
            {
                var Component = Qt.createComponent("qrc:///GpsMarker.qml")
                var item = Component.createObject(window, {
                                                      coordinate: QtPositioning.coordinate(-7.286460463054833, 112.79596433586721)
                                                  })
                map.addMapItem(item)
            }
            //Components

            property string hostingKey: "RolYgK0ohJbUthcvDoYd"
            Plugin {
                id: mapPluginRaster
                name: "osm"
             }

            Map {
                id: mapview
                anchors.fill: parent
                plugin: mapPluginRaster
                center: QtPositioning.coordinate(-7.286460463054833, 112.79596433586721) // danau 8
                zoomLevel: 18.3

                gesture.enabled: true
                gesture.acceptedGestures: MapGestureArea.PinchGesture | MapGestureArea.PanGesture

                property int markerCounter: 0 // counter for total amount of markers
                property int currentMarker
                property int lastX : -1
                property int lastY : -1
                property int pressX : -1
                property int pressY : -1
                property int jitterThreshold : 10
                x: 0

                //GPS marking
                 MapQuickItem {
                    coordinate{
                        latitude:Marker.QMLlatitude
                        longitude:Marker.QMLlongitude
                    }
//                    rotation: heading_*180/Math.PI
                    sourceItem: Column {
                        id: column
                        visible: true
                        Image { id: image; x: 0; width: 25; height: 25; anchors.horizontalCenter: parent.horizontalCenter; anchors.verticalCenter: parent.verticalCenter; sourceSize.width: 0; rotation: Marker.QMLHeading; transformOrigin: Item.Center; source: "./img/QtNav.png" }
                    }
                }

            //ui marking
                MapCircle{
                    center {
                        latitude: lat_
                        longitude: long_
                    }
                    border.color: 'black'
                    color: 'black'
                    radius: 5
                 }

                Column{
                    Text {text: "Lat" +lat_}
                    Text {text:"long" +long_}
                }


                MouseArea {
                id: mouseArea
                property variant lastCoordinate
                property var circle
                rotation: 0
                anchors.rightMargin: -93
                anchors.bottomMargin: 52
                anchors.leftMargin: 94
                anchors.topMargin: -50
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
                    console.log("DOR")
                }

                }

            }



}


