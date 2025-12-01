#ifndef PLAYER_H
#define PLAYER_H

#include "Ship.h"
#include <SFML/Graphics.hpp>

class Player : Ship
{
private:
    //sf::Vector2f position;
    sf::CircleShape shape;
    Weapon* currentWeapon = Gun;
public:
    void Render(sf::RenderWindow& window);
    void Move(int direction, float speed);
    void PlayerShoot();
    Player();
    ~Player();
    float speed = 10.0f;
};

#endif 