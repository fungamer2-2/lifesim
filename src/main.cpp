#include <iostream>
#include <mainCharacter.h>
#include <parent.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

int main() {
	srand(time(NULL));
	Parent p1(true);
	Parent p2(false);
	mainCharacter player(&p1, &p2);
	std::cout << player.getFirstName() << std::endl;
	std::cout << player.getLastName() << std::endl;
	std::cout << player.getSex() << std::endl;
	std::cout << player.getIntelligence() << std::endl;
	std::cout << player.getCharisma() << std::endl;
	std::cout << player.getHealth() << std::endl;
	std::cout << player.getAge() << std::endl;

	sf::ContextSettings settings;
	settings.antialiasingLevel = 4;
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "LifeSim", sf::Style::Default, settings);
	window.setVerticalSyncEnabled(true);
	while (window.isOpen()) {
		sf::Event evnt;
		while (window.pollEvent(evnt)) {
			if (evnt.type == sf::Event::Closed) {
				window.close();
			} else if (evnt.type == sf::Event::KeyPressed) {
				if (evnt.key.code == sf::Keyboard::Escape) {
					window.close();
				}
			}
		}
	}

	return 0;
}