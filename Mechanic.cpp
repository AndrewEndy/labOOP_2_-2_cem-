//
// Created by Endi on 19.02.2024.
//

#include "Mechanic.h"
#include <iostream>

void Mechanic::set_name()
{
    cout<<"Введіть назву клавіатури: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Mechanic::get_name()
{
    cout<<"Назва клавіатури: "<<name<<endl;
}
void Mechanic::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Mechanic::get_TypeOfMaterial()
{
    cout<<"Тип матеріала: "<<type_of_material<<endl;
}
void Mechanic::set_RGB()
{
    int RGB;
    cout<<"Чи потрібна РГБ підсвітка (1-так, 0-ні): ";
    cin>>RGB;
    if (RGB==1)
    {
        rgb=true;
    }
    else
    {
        rgb=false;
    }
}
void Mechanic::get_RGB()
{
    if (rgb==true)
    {
        cout<<"РГБ підсвітка встановлена"<<endl;
    }
    if (rgb==false)
    {
        cout<<"РГБ підсвітка відсутння"<<endl;
    }
}
void Mechanic::set_weight()
{
    cout<<"Введіть вагу клавіатури: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Mechanic::get_weight()
{
    cout<<"Вага клавіатури: "<<weight<<" кг"<<endl;
}
void Mechanic::info()
{
    cout<<"Назва клавіатури: "<<name
    <<"\nВага клавіатури: "<<weight<<" кг"
    <<"\nТип матеріалу: "<<type_of_material
    <<"\nРГБ підсвітка: "<<rgb<<endl<<endl;
}

Mechanic::Mechanic()
{
    name="None";
    weight=0;
    type_of_material="None";
    rgb=false;
}
Mechanic::Mechanic(std::string &&NameOfKeyboard)
{
    name=NameOfKeyboard;
    weight=0;
    type_of_material="None";
    rgb=false;
}
Mechanic::Mechanic(std::string &&NameOfKeyboard, float Weight)
{
    name=NameOfKeyboard;
    weight=Weight;
    type_of_material="None";
    rgb=false;
}
Mechanic::Mechanic(std::string &&NameOfKeyboard, float Weight, std::string &&NameTypeOfMaterial)
{
    name=NameOfKeyboard;
    weight=Weight;
    type_of_material=NameTypeOfMaterial;
    rgb=false;
}
Mechanic::Mechanic(std::string &&NameOfKeyboard, float Weight, std::string &&NameTypeOfMaterial, bool Rgb)
{
    name=NameOfKeyboard;
    weight=Weight;
    type_of_material=NameTypeOfMaterial;
    rgb=Rgb;
}
Mechanic::~Mechanic()
{
    cout<<"called Mechanic destructor"<<endl;
}