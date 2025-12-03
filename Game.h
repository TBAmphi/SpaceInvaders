#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Weapon.h"
#include "Projectile.h"

class Game
{
private:
    float speed = player.speed;
    void ProcessEvents();
    void Render();
    void Update(float deltaTime);

    Weapon GetWeapon();

    //int GetScore() const;
    //void AddScore(int value);

    sf::RenderWindow window;
    Player player;
    int score;
    sf::Clock clock;
public:
    Game();
    void Start();
    ~Game();
    sf::Vector2<Projectile*> projectile;
};

#endif