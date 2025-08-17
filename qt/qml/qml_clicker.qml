import QtQuick
import QtQuick.Controls

Window {
    property int count: 0
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle {

        anchors.fill: parent
        color: "#b0b0b0"

        Column {
            spacing: 300
            anchors.centerIn: parent

            Text {
                font.pixelSize: 30
                // anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                font.family: "Arial"
                color: "#000000"
                id: txt
                text: count

            }

            Button {
                text: count
                font.pixelSize: 40
                onClicked:{
                    count++
                    if(count >= 100){
                        txt.text = "Morpling///My waters rise;/("
                    } else if(count >= 50){
                        txt.text = "Phantom Lancer"
                    } else if(count >= 20){
                        txt.text = "Templar Assassin"
                    } else if(count >= 5){
                        txt.text = "Faceless Void"
                    }

                }
            }

        }
    }
}
