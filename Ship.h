#ifndef SHIP_H
#define SHIP_H

#include <SFML/Graphics.hpp>
#include "Gun.h"

class Ship
{
protected:
    sf::CircleShape shape;
    Weapon* currentWeapon;
    //float life;
    float speed;
    //Weapon* laser;
    
    virtual void Render(sf::RenderWindow& window) = 0;
    virtual void Update() = 0;
    void Move(int direction, float speed);
    //IsTakingDamages();
    //IsDead();
public:
    sf::Vector2f position;
    Ship(sf::Vector2f position);
    ~Ship();
    void SetWeapon(); // set current weapon
    void GetWeapon();
};

#endif