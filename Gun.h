#ifndef GUN_H
#define GUN_H

#include "Weapon.h"
 

class Gun : Weapon
{
private:
    std::string name = "Gun";
    int damage = 5;
    float fireRate = 0.5f;
    float cooldownTime = 0.0f;
    // ammunition
public:
    Gun();
    //void Shoot() override;
    ~Gun();
};

#endif