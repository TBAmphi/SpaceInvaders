#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <SFML/Graphics.hpp>

class Projectile
{
private:
    sf::Vector2f position;
    sf::RectangleShape shape;
    float speed;
    int damage;
    bool bActif;
public:
    Projectile();
    ~Projectile();
    void Update();
    void Render();
    bool IsActive();
};

#endif