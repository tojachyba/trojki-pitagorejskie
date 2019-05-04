#include "Punkty.h"
#include <vector>

int main() {
	sf::RenderWindow window(sf::VideoMode::getDesktopMode() , "trójki pitagorejskie", sf::Style::Fullscreen);

	std::vector<Punkty> punkty(40000);
	Punkty punkt;
	int number = 0;
	for (int i = 1; i < 2000; i++) {
		for (int j = 1; j < 2000; j++) {
			if (sqrt(double(pow(i, 2) + (float)pow(j, 2))) / 1 == int(sqrt(double(pow(i, 2) + (float)pow(j, 2))))) {
				punkt.x = i;
				punkt.y = window.getSize().y - j;
				punkt.number = number;
				punkty[number] = punkt;
				number++;
			}
		}
	}

	while (true) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == event.Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();
		}
		if (!window.isOpen())
			break;

		window.clear();
		for (int i = 0; i < number+1; i++) {
			punkty[i].Print(window);
		}
		window.display();
		
	}
	return 0;
}