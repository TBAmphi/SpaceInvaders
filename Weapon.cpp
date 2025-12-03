#include "Weapon.h"

Weapon::Weapon()
{}

void Weapon::Shoot(sf::Vector2f position, std::list<Projectile> projectileList)
{
    std::cout << "Shoot" << std::endl;
}

Weapon::~Weapon()
{}