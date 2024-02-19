//
// Created by Endi on 19.02.2024.
//

#include "Membrane.h"
#include <iostream>

void Membrane::set_name()
{
    cout<<"Введіть назву клавіатури: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Membrane::get_name()
{
    cout<<"Назва клавіатури: "<<name<<endl;
}
void Membrane::set_weight()
{
    cout<<"Введіть вагу клавіатури: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Membrane::get_weight()
{
    cout<<"Вага клавіатури: "<<weight<<" кг"<<endl;
}
void Membrane::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Membrane::get_TypeOfMaterial()
{
    cout<<"Тип матеріала: "<<type_of_material<<endl;
}
void Membrane::set_wireless()
{
    int WIRELESS;
    cout<<"Провідна чи безпроводна (1-провідна, 0-безпровідна): ";
    cin>>WIRELESS;
    if (WIRELESS==1)
    {
        wireless=true;
    }
    else
    {
        wireless=false;
    }
}
void Membrane::get_wireless()
{
    if (wireless==true)
    {
        cout<<"Клавіатура провідна"<<endl;
    }
    else
    {
        cout<<"Клавіатура безпровідна"<<endl;
    }
}
void Membrane::info()
{
    cout<<"Назва клавіатури: "<<name
        <<"\nВага клавіатури: "<<weight<<" кг"
        <<"\nТип матеріалу: "<<type_of_material
        <<"\nКлавіатура провідна: "<<wireless<<endl<<endl;
}

Membrane::Membrane()
{
    name="None";
    weight=0;
    type_of_material="None";
    wireless= false;
}
Membrane::Membrane(std::string NameOfKeyboard): Membrane()
{
    name=NameOfKeyboard;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight):Membrane(NameOfKeyboard)
{
    weight=Weight;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight, std::string NameTypeOfMaterial):Membrane(NameOfKeyboard,  Weight) {
    type_of_material=NameTypeOfMaterial;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight, std::string NameTypeOfMaterial, bool Wireless):Membrane(NameOfKeyboard,  Weight,  NameTypeOfMaterial) {
    wireless=Wireless;
}
Membrane::~Membrane() {
    cout<<"called Membrane destructor"<<endl;
}