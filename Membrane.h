//
// Created by Endi on 19.02.2024.
//

#ifndef LAB2_2C_MEMBRANE_H
#define LAB2_2C_MEMBRANE_H
#include <iostream>

using namespace std;

class Membrane {
private:
    string name;
    float weight;
    string type_of_material;
    bool wireless;

public:
    void set_name();
    void get_name();
    void set_weight();
    void get_weight();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_wireless();
    void get_wireless();
    void info();

    Membrane();
    Membrane(string NameOfKeyboard);
    Membrane(string NameOfKeyboard, float Weight);
    Membrane(string NameOfKeyboard, float Weight, string NameTypeOfMaterial);
    Membrane(string NameOfKeyboard, float Weight, string NameTypeOfMaterial, bool Wireless);
    ~Membrane();
};


#endif //LAB2_2C_MEMBRANE_H
