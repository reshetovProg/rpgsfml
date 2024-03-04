#include "PlayerStats.h"

PlayerStats::PlayerStats()
{
	hpBar.setSize(sf::Vector2f(320, 32));
	hpBar.setPosition(0, 0);
	hpBar.setFillColor(sf::Color::Red);
	hpBar.setOutlineColor(sf::Color::Black);
	hpBar.setOutlineThickness(2);
	font.loadFromFile("arialbd.ttf");
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setString(std::to_string(hp) + "/100");
	text.setCharacterSize(20);
	text.setOutlineThickness(2);
	text.setPosition(sf::Vector2f(hpBar.getGlobalBounds().width/3
		,hpBar.getGlobalBounds().height / 8));
}

void PlayerStats::drawHp(sf::RenderWindow& window)
{
	window.draw(hpBar);
	window.draw(text);
}

int PlayerStats::getHp()
{
    return hp;
}

void PlayerStats::setHp(int hp)
{
	if (hp > 100) hp = 100;
	if (hp < 0) hp = 0;
	this->hp = hp;
	text.setString(std::to_string(hp) + "/100");
	hpBar.setSize(sf::Vector2f(hp*3.2, 32));
}
