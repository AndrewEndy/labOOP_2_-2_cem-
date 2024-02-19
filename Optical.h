//
// Created by Endi on 19.02.2024.
//

#ifndef LAB2_2C_OPTICAL_H
#define LAB2_2C_OPTICAL_H
#include <iostream>

using namespace std;

class Optical {
private:
    string name;
    float weight;
    string type_of_material;
    bool laser;

public:
    void set_name();
    void get_name();
    void set_weight();
    void get_weight();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_laser();
    void get_laser();
    void info();

    Optical(string &&NameOfKeyboard="None", float Weight=0, string &&TypeOfMaterial="None", bool LASER=false);
    ~Optical();
};


#endif //LAB2_2C_OPTICAL_H
