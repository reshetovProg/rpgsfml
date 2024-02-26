#include "Potion.h"

Potion::Potion(sf::Vector2f startPosition) :
	Item(startPosition)
{
	texture.loadFromFile("./img/potion.png");
	item.setTexture(&texture);
	cout << "yes" << endl;
}

sf::Texture Potion::texture;

