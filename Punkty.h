#pragma once
#include <SFML/Graphics.hpp>

class Punkty {
public:
	Punkty();
	void Print(sf::RenderWindow& window);
	int x, y, number;
	sf::RectangleShape punkt;
};

