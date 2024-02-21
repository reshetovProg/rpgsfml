#pragma once
#include <SFML/Graphics.hpp>
class Item
{
protected:
	sf::RectangleShape item;
	sf::Texture texture;

public:
	Item(sf::Vector2f startPosition);
	void draw(sf::RenderWindow&);
	sf::Vector2f getPosition();
};

