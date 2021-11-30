import QtQuick 2.0
import QtQuick.Window 2.0
import QtLocation 5.6
import QtPositioning 5.6

Item {
    id: window
    Plugin{
        id: mapPlugin
        name:"osm"
    }
    Map{
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(45.783549,4.874572);
        zoomLevel: 14
        Marker{
            coordinate: marker_model.current
        }
        MapItemView{
            model: marker_model
            delegate: Marker{
                coordinate: model.position
            }
        }
    }
}