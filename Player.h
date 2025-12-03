#ifndef PLAYER_H
#define PLAYER_H

#include "Ship.h"
#include <SFML/Graphics.hpp>

class Player : Ship
{
private:
    sf::CircleShape shape;
public:
    void Render(sf::RenderWindow& window) override;
    void Update() override;
    void Move(int direction, float speed);
    //void PlayerShoot();
    Player(sf::Vector2f position);
    ~Player();
    float speed = 10.0f;
    sf::Vector2f position;
};

#endif 