#pragma once
#include <SFML/Graphics.hpp>
#include "Map.h"

class Game
{
private:
	sf::RenderWindow window;
	sf::CircleShape mPlayer;
	Map map;

	void processEvents();
	void update();
	void render();

public:
	Game();
	void run();
};

