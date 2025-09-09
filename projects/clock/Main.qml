import QtQuick
import QtQuick.Window
import QtQuick.Controls
Window {
    minimumWidth: 640
    maximumWidth: 640
    minimumHeight: 480
    maximumHeight: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        anchors.fill: parent
        color: "#2b272b"

        Column {

            anchors.centerIn: parent
            spacing: 20

            Text {
                anchors.horizontalCenter: parent.horizontalCenter
                text: backend.currentTime
                font.pixelSize: 48
                font.bold: true
                font.family: "Italy"
                color: "#dddddd"
                }
        }
    }
}
