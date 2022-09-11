#include "Game.h"
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
//Private Functions---------------------------------------------------------------------------------
void Game::initVariables()
{
    timer = 0;
	window = nullptr;
    windowWidth = 1000;
    windowHeight = 1000;
    videoMode.width = windowWidth;
    videoMode.height = windowHeight;

    rubicsCube.initRubicsCube();


    srand(time(NULL));

    //Shuffle
    int shuffleInterations;
    std::cout << "Enter Number of Shuffle Iterations: ";
    std::cin >> shuffleInterations;
    for (int i = shuffleInterations; i >= 1; i--) {
        switch (rand() % 12 + 1) {
        case 1:
            rubicsCube.rotateBottomLeft();

            break;
        case 2:
            rubicsCube.rotateBottomRight();

            break;
        case 3:
            rubicsCube.rotateLeftDown();

            break;
        case 4:
            rubicsCube.rotateLeftUp();

            break;
        case 5:
            rubicsCube.rotateMiddleDown();

            break;
        case 6:
            rubicsCube.rotateMiddleLeft();

            break;
        case 7:
            rubicsCube.rotateMiddleRight();

            break;
        case 8:
            rubicsCube.rotateMiddleUp();

            break;
        case 9:
            rubicsCube.rotateRightDown();

            break;
        case 10:
            rubicsCube.rotateRightUp();

            break;
        case 11:
            rubicsCube.rotateTopLeft();

            break;
        case 12:
            rubicsCube.rotateTopRight();
            break;
        default:
            std::cout << "Shuffle Error.\n";
        }
    }



}

void Game::initWindow()
{
    window = new sf::RenderWindow(videoMode, "Rubics Cube Simulator", sf::Style::Titlebar | sf::Style::Close);
    window->setFramerateLimit(60);
}

void Game::pollEvents()
{    
    while (window->pollEvent(ev))
    {
        switch (ev.type)
        {
        case sf::Event::Closed:
            window->close();
            break;
        case sf::Event::KeyPressed:
            if (ev.key.code == sf::Keyboard::Escape)
            {
                window->close();
                break;
            }
        }
    }
}

//Public Functions----------------------------------------------------------------------------------
void Game::update()
{
    pollEvents();
    if (timer <= 0) {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                rubicsCube.rotateMiddleUp();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                rubicsCube.rotateTopLeft();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                rubicsCube.rotateTopRight();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                rubicsCube.rotateMiddleDown();
                timer = 60;

            }

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                rubicsCube.rotateLeftUp();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                rubicsCube.rotateMiddleLeft();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                rubicsCube.rotateMiddleRight();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                rubicsCube.rotateLeftDown();
                timer = 60;

            }

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                rubicsCube.rotateMiddleUp();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                rubicsCube.rotateMiddleLeft();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                rubicsCube.rotateMiddleRight();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                rubicsCube.rotateMiddleDown();
                timer = 60;

            }

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                rubicsCube.rotateRightUp();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                rubicsCube.rotateMiddleLeft();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                rubicsCube.rotateMiddleRight();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                rubicsCube.rotateRightDown();
                timer = 60;

            }



        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                rubicsCube.rotateMiddleUp();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                rubicsCube.rotateBottomLeft();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                rubicsCube.rotateBottomRight();
                timer = 60;

            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                rubicsCube.rotateMiddleDown();
                timer = 60;

        }


        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            rubicsCube.rotateLeftUp();
            rubicsCube.rotateMiddleUp();
            rubicsCube.rotateRightUp();

            timer = 60;

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            rubicsCube.rotateLeftDown();
            rubicsCube.rotateMiddleDown();
            rubicsCube.rotateRightDown();

            timer = 60;

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            rubicsCube.rotateTopLeft();
            rubicsCube.rotateMiddleLeft();
            rubicsCube.rotateBottomLeft();

            timer = 60;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            rubicsCube.rotateTopRight();
            rubicsCube.rotateMiddleRight();
            rubicsCube.rotateBottomRight();

            timer = 60;
        }
    }

    timer--;





}

void Game::render()
{
    window->clear();
    rubicsCube.drawFront(window);
    window->display();
}

bool Game::isRunning()
{
    return window->isOpen();
}

//Constructors--------------------------------------------------------------------------------------
Game::Game()
{
	initVariables();
	initWindow();
}

