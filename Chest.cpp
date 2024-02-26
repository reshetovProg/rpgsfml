#include "Chest.h"

Chest::Chest(sf::Vector2f startPosition):
	Item(startPosition)
{
	texture.loadFromFile("./img/treasure.png");
	item.setTexture(&texture);
	cout << "yes" << endl;
}

sf::Texture Chest::texture;



