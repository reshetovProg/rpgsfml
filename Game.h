#pragma once
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Player.h"

class Game
{
private:
	sf::RenderWindow window;
	Player player;
	Map map;
	int playerMoveDirection=0;
	const sf::Time TimePerFrame = sf::seconds(1.f/10.f);

	void processEvents();
	void update(sf::Time deltaTime);
	void render();

public:
	Game();
	void run();
};

