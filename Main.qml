import QtQuick
import QtQuick.Window
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.3
import org.example 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    DataModel{
        id: model
        onNumberChanged: {
            console.log("Hello I Have Changed")
        }
    }

   Text{
       text:model.number
   }

   Button{
       text: qsTr("Add to the Number")
       onClicked: {
           model.setValue(model.number+1)
       }
   }





}
