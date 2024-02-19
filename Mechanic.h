//
// Created by Endi on 19.02.2024.
//

#ifndef LAB2_2C_MECHANIC_H
#define LAB2_2C_MECHANIC_H
#include <iostream>
using namespace std;
class Mechanic{

private:
    string name;
    float weight;
    string type_of_material;
    bool rgb;

public:
    void set_name();
    void get_name();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_RGB();
    void get_RGB();
    void set_weight();
    void get_weight();
    void info();

    Mechanic();
    Mechanic(string &&NameOfKeyboard);
    Mechanic(string &&NameOfKeyboard, float Weight);
    Mechanic(string &&NameOfKeyboard, float Weight, string &&NameTypeOfMaterial);
    Mechanic(string &&NameOfKeyboard, float Weight, string &&NameTypeOfMaterial, bool Rgb);
    ~Mechanic();
};

#endif //LAB2_2C_MECHANIC_H
