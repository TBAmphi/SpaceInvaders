#ifndef GUN_H
#define GUN_H

#include "Weapon.h"
#include <SFML/Graphics.hpp>

class Gun : Weapon
{
private:
    std::string name = "Gun";
    int power = 5;
    // ammunition
public:
    Gun();
    void Shoot();
    ~Gun();
};


#endif