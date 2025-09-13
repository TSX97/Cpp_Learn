import QtQuick
import QtQuick.Controls
import QtQuick.Window
Window {
    maximumWidth: 640
    minimumWidth: 640
    minimumHeight: 480
    maximumHeight: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        anchors.fill: parent
        color: "#2b272b"

        Column {

            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 30
            padding: 100
            Text {

                id: output

                font {
                    family: "JetBrains Mono"
                    bold: true
                    pixelSize: 100
                }
                text: timer.displayTime
                color: "#cccccc"
            }

            TextField {

                id: input

                anchors.horizontalCenter: parent.horizontalCenter
                placeholderText: "HH:MM:SS"
                font {
                    family: "JetBrains Mono"
                    bold: true
                    pixelSize: 20
                }
            }

            Row {

                id: buttons

                anchors.horizontalCenter: parent.horizontalCenter
                spacing: 30

                Button {
                    width: startstop.width
                    text: "Set"

                    background: Rectangle {
                        radius: 20
                        border {
                            color: "#ffffff"
                            width: 4
                        }
                        color: "#cccccc";

                    }

                    font {
                        family: "JetBrains Mono"
                        bold: true
                        pixelSize: 20
                    }

                    onClicked: {
                        timer.specifyTime(input.text)
                    }
                }

                Button {
                    id: startstop
                    text: "Start&Stop"

                    background: Rectangle {
                        radius: 20
                        border {
                            color: "#ffffff"
                            width: 4
                        }
                        color: "#cccccc";

                    }

                    font {
                        family: "JetBrains Mono"
                        bold: true
                        pixelSize: 20
                    }

                    onClicked:{
                        timer.startStopTime()
                    }
                }
            }
        }
    }
}
