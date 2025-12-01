#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <iostream>

class Weapon
{
protected:
    std::string name;
    int power;
    // AmmoType;
    void Shoot();
    void Realod();
public:
    Weapon();
    ~Weapon();
};

#endif