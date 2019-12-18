import QtQuick 2.0
import QtQuick.Controls 2.0

Item {

    TextField {
        id: textField1
        x: 178
        y: 159
        text: qsTr("Text Field")
    }

    TextField {
        id: textField2
        x: 178
        y: 260
        text: qsTr("Text Field")
    }

    Button {
        id: button1
        x: 409
        y: 154
        text: qsTr("Button")
    }

    Button {
        id: button2
        x: 409
        y: 260
        text: qsTr("Button")
    }

}
