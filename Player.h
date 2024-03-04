#pragma once
#include <SFML/Graphics.hpp>
#include "PlayerStats.h"
class Player
{
	sf::RectangleShape player;
	sf::Texture texture;
	PlayerStats playerStats;
	
public:
	Player(sf::Vector2f startPosition);
	void draw(sf::RenderWindow&);
	void move(int direction);
	void addHp(int hp);
	void removeHp(int hp);
	int getHp(int hp);
	sf::Vector2f getPosition();

};

