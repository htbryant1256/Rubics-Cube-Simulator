#include "RubicsCube.h"
RubicsCube::RubicsCube()
{
	initRubicsCube();
}

void RubicsCube::rotateTopLeft()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = leftFace[0][0];
	x2 = leftFace[1][0];
	x3 = leftFace[2][0];

	x4 = rearFace[2][0];
	x5 = rearFace[1][0];
	x6 = rearFace[0][0];

	leftFace[0][0] = frontFace[0][0];
	leftFace[1][0] = frontFace[1][0];
	leftFace[2][0] = frontFace[2][0];

	rearFace[2][0] = x1;
	rearFace[1][0] = x2;
	rearFace[0][0] = x3;

	x1 = rightFace[0][0];
	x2 = rightFace[1][0];
	x3 = rightFace[2][0];

	rightFace[0][0] = x4;
	rightFace[1][0] = x5;
	rightFace[2][0] = x6;

	frontFace[0][0] = x1;
	frontFace[1][0] = x2;
	frontFace[2][0] = x3;

	rotateArrayClockwise(topFace);


}

void RubicsCube::rotateMiddleLeft()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = leftFace[0][1];
	x2 = leftFace[1][1];
	x3 = leftFace[2][1];

	x4 = rearFace[2][1];
	x5 = rearFace[1][1];
	x6 = rearFace[0][1];

	leftFace[0][1] = frontFace[0][1];
	leftFace[1][1] = frontFace[1][1];
	leftFace[2][1] = frontFace[2][1];

	rearFace[2][1] = x1;
	rearFace[1][1] = x2;
	rearFace[0][1] = x3;

	x1 = rightFace[0][1];
	x2 = rightFace[1][1];
	x3 = rightFace[2][1];

	rightFace[0][1] = x4;
	rightFace[1][1] = x5;
	rightFace[2][1] = x6;

	frontFace[0][1] = x1;
	frontFace[1][1] = x2;
	frontFace[2][1] = x3;
}

void RubicsCube::rotateBottomLeft()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = leftFace[0][2];
	x2 = leftFace[1][2];
	x3 = leftFace[2][2];

	x4 = rearFace[2][2];
	x5 = rearFace[1][2];
	x6 = rearFace[0][2];

	leftFace[0][2] = frontFace[0][2];
	leftFace[1][2] = frontFace[1][2];
	leftFace[2][2] = frontFace[2][2];

	rearFace[2][2] = x1;
	rearFace[1][2] = x2;
	rearFace[0][2] = x3;

	x1 = rightFace[0][2];
	x2 = rightFace[1][2];
	x3 = rightFace[2][2];

	rightFace[0][2] = x4;
	rightFace[1][2] = x5;
	rightFace[2][2] = x6;

	frontFace[0][2] = x1;
	frontFace[1][2] = x2;
	frontFace[2][2] = x3;

	rotateArrayCounterClockwise(bottomFace);

}

void RubicsCube::rotateTopRight()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = rightFace[0][0];
	x2 = rightFace[1][0];
	x3 = rightFace[2][0];

	x4 = rearFace[2][0];
	x5 = rearFace[1][0];
	x6 = rearFace[0][0];

	rightFace[0][0] = frontFace[0][0];
	rightFace[1][0] = frontFace[1][0];
	rightFace[2][0] = frontFace[2][0];

	rearFace[2][0] = x1;
	rearFace[1][0] = x2;
	rearFace[0][0] = x3;

	x1 = leftFace[0][0];
	x2 = leftFace[1][0];
	x3 = leftFace[2][0];

	leftFace[0][0] = x4;
	leftFace[1][0] = x5;
	leftFace[2][0] = x6;

	frontFace[0][0] = x1;
	frontFace[1][0] = x2;
	frontFace[2][0] = x3;


	rotateArrayCounterClockwise(topFace);
}

void RubicsCube::rotateMiddleRight()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = rightFace[0][1];
	x2 = rightFace[1][1];
	x3 = rightFace[2][1];

	x4 = rearFace[2][1];
	x5 = rearFace[1][1];
	x6 = rearFace[0][1];

	rightFace[0][1] = frontFace[0][1];
	rightFace[1][1] = frontFace[1][1];
	rightFace[2][1] = frontFace[2][1];

	rearFace[2][1] = x1;
	rearFace[1][1] = x2;
	rearFace[0][1] = x3;

	x1 = leftFace[0][1];
	x2 = leftFace[1][1];
	x3 = leftFace[2][1];

	leftFace[0][1] = x4;
	leftFace[1][1] = x5;
	leftFace[2][1] = x6;

	frontFace[0][1] = x1;
	frontFace[1][1] = x2;
	frontFace[2][1] = x3;
}

void RubicsCube::rotateBottomRight()
{
	int x1, x2, x3;
	int x4, x5, x6;

	x1 = rightFace[0][2];
	x2 = rightFace[1][2];
	x3 = rightFace[2][2];

	x4 = rearFace[2][2];
	x5 = rearFace[1][2];
	x6 = rearFace[0][2];

	rightFace[0][2] = frontFace[0][2];
	rightFace[1][2] = frontFace[1][2];
	rightFace[2][2] = frontFace[2][2];

	rearFace[2][2] = x1;
	rearFace[1][2] = x2;
	rearFace[0][2] = x3;

	x1 = leftFace[0][2];
	x2 = leftFace[1][2];
	x3 = leftFace[2][2];

	leftFace[0][2] = x4;
	leftFace[1][2] = x5;
	leftFace[2][2] = x6;

	frontFace[0][2] = x1;
	frontFace[1][2] = x2;
	frontFace[2][2] = x3;

	rotateArrayClockwise(bottomFace);


}

void RubicsCube::rotateLeftUp()
{
	int y1, y2, y3;
	int y4, y5, y6;

	y1 = topFace[0][0];
	y2 = topFace[0][1];
	y3 = topFace[0][2];

	y4 = rearFace[0][2];
	y5 = rearFace[0][1];
	y6 = rearFace[0][0];

	topFace[0][0] = frontFace[0][0];
	topFace[0][1] = frontFace[0][1];
	topFace[0][2] = frontFace[0][2];

	rearFace[0][2] = y1;
	rearFace[0][1] = y2;
	rearFace[0][0] = y3;

	y1 = bottomFace[0][0];
	y2 = bottomFace[0][1];
	y3 = bottomFace[0][2];

	bottomFace[0][0] = y4;
	bottomFace[0][1] = y5;
	bottomFace[0][2] = y6;

	frontFace[0][0] = y1;
	frontFace[0][1] = y2;
	frontFace[0][2] = y3;

	rotateArrayCounterClockwise(leftFace);
}

void RubicsCube::rotateMiddleUp()
{
	int y1, y2, y3;
	int y4, y5, y6;

	y1 = topFace[1][0];
	y2 = topFace[1][1];
	y3 = topFace[1][2];

	y4 = rearFace[1][2];
	y5 = rearFace[1][1];
	y6 = rearFace[1][0];

	topFace[1][0] = frontFace[1][0];
	topFace[1][1] = frontFace[1][1];
	topFace[1][2] = frontFace[1][2];

	rearFace[1][2] = y1;
	rearFace[1][1] = y2;
	rearFace[1][0] = y3;

	y1 = bottomFace[1][0];
	y2 = bottomFace[1][1];
	y3 = bottomFace[1][2];

	bottomFace[1][0] = y4;
	bottomFace[1][1] = y5;
	bottomFace[1][2] = y6;

	frontFace[1][0] = y1;
	frontFace[1][1] = y2;
	frontFace[1][2] = y3;

}

void RubicsCube::rotateRightUp()
{


	int y1, y2, y3;
	int y4, y5, y6;

	y1 = topFace[2][0];
	y2 = topFace[2][1];
	y3 = topFace[2][2];

	y4 = rearFace[2][2];
	y5 = rearFace[2][1];
	y6 = rearFace[2][0];

	topFace[2][0] = frontFace[2][0];
	topFace[2][1] = frontFace[2][1];
	topFace[2][2] = frontFace[2][2];

	rearFace[2][2] = y1;
	rearFace[2][1] = y2;
	rearFace[2][0] = y3;

	y1 = bottomFace[2][0];
	y2 = bottomFace[2][1];
	y3 = bottomFace[2][2];

	bottomFace[2][0] = y4;
	bottomFace[2][1] = y5;
	bottomFace[2][2] = y6;

	frontFace[2][0] = y1;
	frontFace[2][1] = y2;
	frontFace[2][2] = y3;

	rotateArrayClockwise(rightFace);


}

void RubicsCube::rotateLeftDown()
{
	int y1, y2, y3;
	int y4, y5, y6;

	y1 = bottomFace[0][0];
	y2 = bottomFace[0][1];
	y3 = bottomFace[0][2];

	y4 = rearFace[0][2];
	y5 = rearFace[0][1];
	y6 = rearFace[0][0];

	bottomFace[0][0] = frontFace[0][0];
	bottomFace[0][1] = frontFace[0][1];
	bottomFace[0][2] = frontFace[0][2];

	rearFace[0][2] = y1;
	rearFace[0][1] = y2;
	rearFace[0][0] = y3;

	y1 = topFace[0][0];
	y2 = topFace[0][1];
	y3 = topFace[0][2];

	topFace[0][0] = y4;
	topFace[0][1] = y5;
	topFace[0][2] = y6;

	frontFace[0][0] = y1;
	frontFace[0][1] = y2;
	frontFace[0][2] = y3;

	rotateArrayClockwise(leftFace);


}

void RubicsCube::rotateRightDown()
{
	int y1, y2, y3;
	int y4, y5, y6;

	y1 = bottomFace[2][0];
	y2 = bottomFace[2][1];
	y3 = bottomFace[2][2];

	y4 = rearFace[2][2];
	y5 = rearFace[2][1];
	y6 = rearFace[2][0];

	bottomFace[2][0] = frontFace[2][0];
	bottomFace[2][1] = frontFace[2][1];
	bottomFace[2][2] = frontFace[2][2];

	rearFace[2][2] = y1;
	rearFace[2][1] = y2;
	rearFace[2][0] = y3;

	y1 = topFace[2][0];
	y2 = topFace[2][1];
	y3 = topFace[2][2];

	topFace[2][0] = y4;
	topFace[2][1] = y5;
	topFace[2][2] = y6;

	frontFace[2][0] = y1;
	frontFace[2][1] = y2;
	frontFace[2][2] = y3;

	rotateArrayCounterClockwise(rightFace);

}

void RubicsCube::rotateMiddleDown()
{

	int y1, y2, y3;
	int y4, y5, y6;

	y1 = bottomFace[1][0];
	y2 = bottomFace[1][1];
	y3 = bottomFace[1][2];

	y4 = rearFace[1][2];
	y5 = rearFace[1][1];
	y6 = rearFace[1][0];

	bottomFace[1][0] = frontFace[1][0];
	bottomFace[1][1] = frontFace[1][1];
	bottomFace[1][2] = frontFace[1][2];

	rearFace[1][2] = y1;
	rearFace[1][1] = y2;
	rearFace[1][0] = y3;

	y1 = topFace[1][0];
	y2 = topFace[1][1];
	y3 = topFace[1][2];

	topFace[1][0] = y4;
	topFace[1][1] = y5;
	topFace[1][2] = y6;

	frontFace[1][0] = y1;
	frontFace[1][1] = y2;
	frontFace[1][2] = y3;

}



void RubicsCube::printFront()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << frontFace[x][y] << " ";
		}
		std::cout << "\n";
	}

}

void RubicsCube::printRear()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << rearFace[x][y] << " ";
		}
		std::cout << "\n";
	}
}

void RubicsCube::printLeft()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << leftFace[x][y] << " ";
		}
		std::cout << "\n";
	}
}

void RubicsCube::printRight()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << rightFace[x][y] << " ";
		}
		std::cout << "\n";
	}
}

void RubicsCube::printBottom()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << bottomFace[x][y] << " ";
		}
		std::cout << "\n";
	}
}

void RubicsCube::printTop()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			std::cout << topFace[x][y] << " ";
		}
		std::cout << "\n";
	}
}

void RubicsCube::drawFront(sf::RenderWindow* window)
{

	//Draw Front
	cube.setSize(sf::Vector2f(50, 40));

	cube.setPosition(sf::Vector2f(400, 400));

	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			if (frontFace[x][y] == 'w') {
				cube.setFillColor(sf::Color::White);
				window->draw(cube);
			}
			else if (frontFace[x][y] == 'y') {
				cube.setFillColor(sf::Color::Yellow);
				window->draw(cube);
			}
			else if (frontFace[x][y] == 'g') {
				cube.setFillColor(sf::Color::Green);
				window->draw(cube);
			}
			else if (frontFace[x][y] == 'r') {
				cube.setFillColor(sf::Color::Red);
				window->draw(cube);
			}
			else if (frontFace[x][y] == 'b') {
				cube.setFillColor(sf::Color::Blue);
				window->draw(cube);
			}
			else if (frontFace[x][y] == 'o') {
				cube.setFillColor(sf::Color(255, 117, 24));
				window->draw(cube);
			}
			cube.move(sf::Vector2f(55, 0));
		}
		cube.move(sf::Vector2f(-165, 45));
	}

	//Draw Top
	cube.setPosition(sf::Vector2f(400, 292));
	cube.setSize(sf::Vector2f(50, 30));

	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			if (topFace[x][y] == 'w') {
				cube.setFillColor(sf::Color::White);
				window->draw(cube);
			}
			else if (topFace[x][y] == 'y') {
				cube.setFillColor(sf::Color::Yellow);
				window->draw(cube);
			}
			else if (topFace[x][y] == 'g') {
				cube.setFillColor(sf::Color::Green);
				window->draw(cube);
			}
			else if (topFace[x][y] == 'r') {
				cube.setFillColor(sf::Color::Red);
				window->draw(cube);
			}
			else if (topFace[x][y] == 'b') {
				cube.setFillColor(sf::Color::Blue);
				window->draw(cube);
			}
			else if (topFace[x][y] == 'o') {
				cube.setFillColor(sf::Color(255, 117, 24));
				window->draw(cube);
			}
			cube.move(sf::Vector2f(55, 0));
		}
		cube.move(sf::Vector2f(-165, 35));
	}

}



void RubicsCube::rotateArrayClockwise(char charArray[3][3])
{
	rotateArrayCounterClockwise(charArray);
	rotateArrayCounterClockwise(charArray);
	rotateArrayCounterClockwise(charArray);

}

void RubicsCube::rotateArrayCounterClockwise(char charArray[3][3])
{
	for (int i = 0; i < 3 / 2; i++)
	{
		for (int j = 0; j < ((3 / 2) + (3 % 2)); j++)
		{
			char tempChar1, tempChar2;

			tempChar1 = charArray[j][3 - 1 - i];
			charArray[j][3 - 1 - i] = charArray[i][j];
			tempChar2 = charArray[3 - 1 - i][3 - 1 - j];
			charArray[3 - 1 - i][3 - 1 - j] = tempChar1;
			tempChar1 = charArray[3 - 1 - j][i];
			charArray[3 - 1 - j][i] = tempChar2;
			charArray[i][j] = tempChar1;

		}
	}
}

void RubicsCube::initRubicsCube()
{
	for (int y = 0; y <= 2; y++) {
		for (int x = 0; x <= 2; x++) {
			frontFace[x][y] = 'w';
			rearFace[x][y] = 'y';
			rightFace[x][y] = 'o';
			bottomFace[x][y] = 'b';
			leftFace[x][y] = 'r';
			topFace[x][y] = 'g';







		}
	}
	//cube.setPosition(sf::Vector2f(100, 100));
	//cube.setFillColor(sf::Color::White);
	cube.setSize(sf::Vector2f(50, 50));

}
