import QtQuick
import QtQml

Window {
    width: 640
    height: 480
    maximumHeight: 480
    minimumHeight: 480
    maximumWidth: 640
    minimumWidth: 640
    visible: true
    title: qsTr("Hello World")
    Grid {
        columns: 2
        rows: 2
        spacing: 10
        anchors.centerIn: parent
        Rectangle {
            id: red
            width: 100
            height: 100
            color: "#ff4444"
            border.color: "#141414"
            border.width: 4
            radius: 0
        }
        Rectangle {

            width: 100
            height: 100
            color: "#44ff88"
            border.color: "#141414"
            border.width: 4
            radius: 15
        }
        Rectangle {
            width: 100
            height: 100
            color: "#4444ff"
            border.color: "#141414"
            border.width: 4
            radius: 30
        }
        Rectangle {
            width: 100
            height: 100
            color: "#ffff44"
            border.color: "#141414"
            border.width: 4
            radius: 45
        }
    }
}
