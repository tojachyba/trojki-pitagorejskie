#include "Punkty.h"



Punkty::Punkty(){
	this->punkt.setFillColor(sf::Color::White);
	this->punkt.setSize(sf::Vector2f(1.f, 1.f));
}
void Punkty::Print(sf::RenderWindow& window) {
	this->punkt.setPosition(sf::Vector2f(x * 1.0f, y * 1.0f));
	window.draw(this->punkt);
}