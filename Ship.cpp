#include "Ship.h"
#include <SFML/Graphics.hpp>

Ship::Ship()
{

}

void Ship::Move(int direction, float speed)
{
    shape.move(direction * speed, 0);
}

Ship::~Ship()
{
}