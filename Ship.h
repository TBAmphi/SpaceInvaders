#ifndef SHIP_H
#define SHIP_H

#include <SFML/Graphics.hpp>
#include "Gun.h"

class Ship
{
protected:
    sf::CircleShape shape;
    sf::Vector2f position;
    float life;
    float speed;
    Weapon* currentWeapon; // Switch actual weapon --> ammoType
    //Weapon* laser;
    void Move(int direction, float speed);
    void Update();
    IsTakingDamages();
    IsDead();
public:
    Ship();
    ~Ship();
    void Render(sf::RenderWindow& window);
};

#endif