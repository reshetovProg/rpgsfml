#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class PlayerStats
{
	sf::RectangleShape hpBar;
	sf::Font font;
	sf::Text text;
	int hp = 100;
public:
	PlayerStats();
	void drawHp(sf::RenderWindow& window);
	int getHp();
	void setHp(int hp);
};

