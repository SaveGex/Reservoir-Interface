#include "MyForm.h"
#include "Reservoir.h"
#include "feauture.h"
#include <format>
#include <string>
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;

Reservoir obj1;
Reservoir obj2;


System::Void ReservoirInterface::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
    String^ managedString = textBox1->Text;

    // Преобразуем управляемую строку в неуправляемую
    IntPtr unmanagedPointer = Marshal::StringToHGlobalAnsi(managedString);
    const char* unmanagedString = static_cast<const char*>(unmanagedPointer.ToPointer());

    // Создаем std::string из неуправляемой строки
    obj1.setter_name(unmanagedString);

    Marshal::FreeHGlobal(unmanagedPointer);

    if (check_type_conversation(textBox2->Text)) {
        obj1.setter_width(Int32::Parse(textBox2->Text));
    }
    else {
        textBox2->Text = "Write some digits";
    }

    if (check_type_conversation(textBox3->Text)) {
        obj1.setter_length(Int32::Parse(textBox3->Text));
    }
    else {
        textBox3->Text = "Write some digits";
    }

    if (check_type_conversation(textBox7->Text)) {

        obj1.setter_maxDeep(Int32::Parse(textBox7->Text));
    }
    else {
        textBox7->Text = "Write some digits";
    }

    managedString = label10->Text;
    unmanagedString = static_cast<const char*>(unmanagedPointer.ToPointer());

    std::string stdString(unmanagedString);

    // Вызываем setter_type со std::string
    obj1.setter_type(stdString);
    

    managedString = textBox6->Text;

    // Преобразуем управляемую строку в неуправляемую
    unmanagedPointer = Marshal::StringToHGlobalAnsi(managedString);
    unmanagedString = static_cast<const char*>(unmanagedPointer.ToPointer());

    // Создаем std::string из неуправляемой строки
    obj2.setter_name(unmanagedString);

    Marshal::FreeHGlobal(unmanagedPointer);

    if (check_type_conversation(textBox5->Text)) {
        obj2.setter_width(Int32::Parse(textBox5->Text));
    }
    else {
        textBox5->Text = "Write some digits";
    }

    if (check_type_conversation(textBox4->Text)) {
        obj2.setter_length(Int32::Parse(textBox4->Text));
    }
    else {
        textBox4->Text = "Write some digits";
    }

    if (check_type_conversation(textBox8->Text)) {

        obj2.setter_maxDeep(Int32::Parse(textBox8->Text));
    }
    else {
        textBox8->Text = "Write some digits";
    }

    managedString = label11->Text;
    unmanagedString = static_cast<const char*>(unmanagedPointer.ToPointer());

    std::string stdString2(unmanagedString);

    // Вызываем setter_type со std::string
    obj2.setter_type(stdString2);

    if ((obj1.notEmpty() && obj2.notEmpty()) == true) {
        std::string buffer_result = std::format("{}\n Approximate volume: {} \n Surface area: {}\n{}\nApproximate volume: {} \nSurface area: {}", obj1.getter_name(), obj1.approximateVolume(), obj1.surfaceArea(), obj2.getter_name() ,obj2.approximateVolume(), obj2.surfaceArea());
        String^ result = gcnew System::String(buffer_result.c_str());
        MessageBox::Show(result, "Results");
    }


}



System::Void ReservoirInterface::MyForm::seaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* sea = "Sea";
    label10->Text = gcnew System::String(sea);
    obj1.setter_type(sea);
    return System::Void();
}

System::Void ReservoirInterface::MyForm::pondToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* pond = "Pond";
    label10->Text = gcnew System::String(pond);
    obj1.setter_type(pond);

    return System::Void();
}

System::Void ReservoirInterface::MyForm::poolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* pool = "Pool";
    label10->Text = gcnew System::String(pool);
    obj1.setter_type(pool);

    return System::Void();
}

System::Void ReservoirInterface::MyForm::label10_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->contextMenuStrip1->Show(this->label10, System::Drawing::Point(0, this->label10->Height));
}


System::Void ReservoirInterface::MyForm::label11_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->contextMenuStrip2->Show(this->label11, System::Drawing::Point(0, this->label11->Height));

}

System::Void ReservoirInterface::MyForm::toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* sea = "Sea";
    label11->Text = gcnew System::String(sea);
    obj2.setter_type(sea);

    return System::Void();
}

System::Void ReservoirInterface::MyForm::toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* pond = "Pond";
    label11->Text = gcnew System::String(pond);
    obj2.setter_type(pond);

    return System::Void();
}

System::Void ReservoirInterface::MyForm::toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e)
{
    const char* pool = "Pool";
    label11->Text = gcnew System::String(pool);
    obj2.setter_type(pool);

    return System::Void();
}
