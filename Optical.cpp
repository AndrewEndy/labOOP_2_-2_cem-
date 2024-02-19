//
// Created by Endi on 19.02.2024.
//

#include "Optical.h"
#include <iostream>
void Optical::set_name()
{
    cout<<"Введіть назву клавіатури: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Optical::get_name()
{
    cout<<"Назва клавіатури: "<<name<<endl;
}
void Optical::set_weight()
{
    cout<<"Введіть вагу клавіатури: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Optical::get_weight()
{
    cout<<"Вага клавіатури: "<<weight<<" кг"<<endl;
}
void Optical::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Optical::get_TypeOfMaterial()
{
    cout<<"Тип матеріала: "<<type_of_material<<endl;
}
void Optical::set_laser()
{
    int LASER;
    cout<<"З лазером чи без (1-з лазером, 0-без лазера): ";
    cin>>LASER;
    if (LASER==1)
    {
        laser=true;
    }
    else
    {
        laser=false;
    }
}
void Optical::get_laser()
{
    if (laser==true)
    {
        cout<<"Клавіатура провідна"<<endl;
    }
    else
    {
        cout<<"Клавіатура безпровідна"<<endl;
    }
}
void Optical::info()
{
    cout<<"Назва клавіатури: "<<name
        <<"\nВага клавіатури: "<<weight<<" кг"
        <<"\nТип матеріалу: "<<type_of_material
        <<"\nКлавіатура з лазером: "<<laser<<endl<<endl;
}

Optical::Optical(std::string &&NameOfKeyboard, float Weight, std::string &&TypeOfMaterial, bool LASER):
name(NameOfKeyboard), weight(Weight), type_of_material(TypeOfMaterial), laser(LASER)
{
    cout<<"called constructor default"<<endl;
}
Optical::~Optical(){
    cout<<"called Optical destructor"<<endl;
}