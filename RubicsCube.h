#ifndef RUBICS_CUBE_H
#define RUBICS_CUBE_H
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"
#include <iostream>
#include "RubicsCube.h"
class RubicsCube
{
public:
	RubicsCube();
	void rotateTopLeft();

	void rotateMiddleLeft();

	void rotateBottomLeft();

	void rotateTopRight();

	void rotateMiddleRight();

	void rotateBottomRight();


	void rotateLeftUp();


	void rotateMiddleUp();

	void rotateRightUp();

	void rotateLeftDown();

	void rotateRightDown();


	void rotateMiddleDown();


	void initRubicsCube();


	void drawFront(sf::RenderWindow*);




private:


	void printFront();
	void printRear();
	void printLeft();
	void printRight();
	void printBottom();
	void printTop();

	void rotateArrayClockwise(char[3][3]);
	void rotateArrayCounterClockwise(char[3][3]);

	char frontFace[3][3];
	char bottomFace[3][3];
	char topFace[3][3];
	char rearFace[3][3];
	char rightFace[3][3];
	char leftFace[3][3];

	sf::RectangleShape cube;



};

#endif