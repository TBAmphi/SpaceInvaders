#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <iostream>
#include <list>
#include "Projectile.h"

class Weapon
{
protected:
    std::string name;
    int damage;
    float fireRate;
    float cooldownTime;
    // AmmoType;
    //void Realod();
    void Shoot(sf::Vector2f position, std::list<Projectile> projectileList);
    void UpdateCooldown(float deltaTime);
public:
    Weapon();
    ~Weapon();
};

#endif