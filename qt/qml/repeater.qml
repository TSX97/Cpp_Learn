import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListModel {
        id: squaresModel
        ListElement { name: "Red"; color: "#dc143c"}
        ListElement { name: "Blue"; color: "#00bfff"}
        ListElement { name: "Green"; color: "#00cc5f"}
        ListElement { name: "Yellow"; color: "#f0e68c"}
        ListElement { name: "Purple"; color: "#9370db"}
        ListElement { name: "Orange"; color: "#f2893e"}
    }


    Grid {
        columns: 2
        rows: 3
        anchors.centerIn: parent
        padding: 10
        spacing: 20

        Repeater {

            model: squaresModel
            Rectangle {
                height: 160
                width: 160
                color: model.color
                Text {
                    anchors.centerIn: parent
                    anchors.left: parent.left
                    font.pixelSize: 24
                    font.bold: true
                    font.family: "Vendeta"
                    text: model.name
                }
            }
        }
    }
}

