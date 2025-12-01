#include "Game.h"
#include <SFML/Graphics.hpp>

Game::Game() : player()  //Liste d'initialisation
{

}

void Game::Start()
{
    window.create(sf::VideoMode(800, 800), "SpaceInvaders");
    window.setFramerateLimit(60);
    while(window.isOpen())
    {
        ProcessEvents();
        Update();
        Render();
    }
}

void Game::Render()
{
    window.clear();
    player.Render(window);
    window.display();
}

void Game::ProcessEvents()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            window.close();
        }
        if(event.type == sf::Event::KeyPressed)
        {
            switch (event.key.code)
            {
                case sf::Keyboard::Escape:
                    window.close();
                    break;
                case sf::Keyboard::Q:
                    player.Move(-1, speed);
                    break;
                case sf::Keyboard::D:
                    player.Move(1, speed);
                    break;
                case sf::Keyboard::Space:
                    //player.Shoot();
                    break;
            }
        }
    } 
}

void Game::Update()
{}

Game::~Game()
{}