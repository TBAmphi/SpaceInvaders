#include "Player.h"
#include <SFML/Graphics.hpp>

Player::Player(sf::Vector2f position) : Ship(position)
{
    shape.setPointCount(3);
    shape.setRadius(30.0f);
    shape.setFillColor(sf::Color::Cyan);
    shape.setPosition(370, 600);
}

void Player::Render(sf::RenderWindow& window)
{
    window.draw(shape);
}

void Player::Move(int direction, float speed)
{
    if(shape.getPosition().x <= 650 && shape.getPosition().x >= 50)
        shape.move(direction * speed, 0);
    else if (shape.getPosition().x < 650)
    {
        shape.setPosition(640, 600);
    }
    else if (shape.getPosition().x > 50)
    {
        shape.setPosition(60, 600);
    }
}

/*void Player::PlayerShoot()
{
    //currentWeapon.Shoot();
}*/

void Player::Update()
{

}

Player::~Player()
{
}