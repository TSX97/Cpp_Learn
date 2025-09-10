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

    Rectangle {
        anchors.fill: parent
        color: "#2b272b"

        Column {

            anchors.centerIn: parent
            spacing: 20

            Text {

                id: display
                anchors.horizontalCenter: parent.horizontalCenter

                text: stopWatch.time.toLocaleString(Qt.locale("en_Us"), "hh:mm:ss")
                font.pixelSize: 120
                font.family: "JetBrains Mono"
                color: "#dddddd"
            }

            Row {
                anchors.horizontalCenter: parent.horizontalCenter
                spacing: 20

                Button {

                    id: resetButton
                    height: 60
                    width: 140
                    padding: 8
                    background: Rectangle {

                        radius: 25
                        color: "#ffffff"
                        border {
                            width: 4
                            color: "#000000"
                        }
                        // width: 100
                        // height: 100
                    }

                    Text {
                        font.pixelSize: 24
                        font.family: "JetBrains Mono"
                        text: "Reset"
                        font.bold: true
                        anchors.fill: parent
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }



                    onClicked: {
                        stopWatch.resetTimer()
                    }
                }

                Button {

                    id: startStopButton
                    height: 60
                    width: 140
                    padding: 8
                    background: Rectangle {

                        radius: 25
                        color: "#ffffff"
                        border {
                            width: 4
                            color: "#000000"
                        }
                        // width: 100
                        // height: 100
                    }

                    Text {
                        font.pixelSize: 24
                        font.family: "JetBrains Mono"
                        text: "Start\n&Stop"
                        font.bold: true
                        anchors.fill: parent
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }



                    onClicked: {
                        stopWatch.startStopTimer()
                    }
                }
            }
        }
    }
}



