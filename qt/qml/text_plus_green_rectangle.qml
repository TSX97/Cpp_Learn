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
    
    Rectangle {
        
        anchors.centerIn: parent
        color: "#44ff8c"
        width: 220
        height: 220
        
        Text {

            text: "oh no green (#44ff8c) rectangle..."
            font.pixelSize: 16
            font.family: "Vendana"
            font.bold: true
            width: parent.width - 20
            color: "#1c1c1c"
            anchors.centerIn: parent
            wrapMode: Text.WordWrap
        }

    }

}
