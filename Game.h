#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Player.h"

class Game
{
private:
    sf::RenderWindow window;
    void Render();
    void ProcessEvents();
    Player player;
    float speed = player.speed;
    //sf::Text score;
    //sf::Font font;
public:
    Game();
    void Start();
    void Update();
    ~Game();
};

#endif