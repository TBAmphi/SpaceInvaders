#include "Ship.h"
#include <SFML/Graphics.hpp>

Ship::Ship(sf::Vector2f position)
{

}

void Ship::Move(int direction, float speed)
{
    shape.move(direction * speed, 0);
}

void SetWeapon()
{
    Gun* gun = new Gun;
}

Ship::~Ship()
{
}