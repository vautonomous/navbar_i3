import QtQuick 2.10
import QtQuick.Window 2.10
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5
import MyRunFromTerminal 1.0
import QtQuick.Controls.Material 2.2
import "."

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("navbar_i3")

    Material.theme: Material.Light
    Material.accent: Sytlish.cola1
    Material.primary: Sytlish.colp2

    RunFromTerminal{
        id: runIt
    }

    color: Sytlish.colp2

    RowLayout{
        anchors.fill: parent
        // anchors.margins: 10
        anchors.topMargin: 10
        TabBar {
            anchors.bottom: parent
            Layout.fillWidth: true
            Layout.fillHeight: true
            Material.foreground: Sytlish.cola1
            Material.background: Sytlish.colp3
            TabButton {
                font.pointSize: 14
                font.bold: true
                text: "Hedef Seçim"
                onClicked: runIt.run("/usr/bin/i3-msg [class=\"Mission_Control\" instance=\"mission_control\"] focus")
            }
            TabButton {
                font.pointSize: 14
                text: "Otonom Sürüş"
                onClicked: runIt.run("/usr/bin/i3-msg [class=\"rviz2\" instance=\"rviz_volt\"] focus")
            }
        }

    }
}
