#ifndef GAME_H
#define GAME_H
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"
#include <iostream>
#include "RubicsCube.h"
class Game
{
private:
	//Objects
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode videoMode;

	//Objects From Headers
	RubicsCube rubicsCube;
	//Private Variables
	int windowHeight;
	int windowWidth;
	int timer;
	//Private Functions
	void initVariables();
	void initWindow();

public:
	sf::View view;

	//Constructors
	Game();

	//Functions
	void pollEvents();
	void update();
	void render();
	bool isRunning();
};

#endif