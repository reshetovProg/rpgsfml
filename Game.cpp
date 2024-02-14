#include "Game.h"

void Game::processEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
	}

}

void Game::update()
{
}

void Game::render()
{
	window.clear();
	window.draw(mPlayer);
	map.draw(window);
	window.display();
}

Game::Game()
	:window(sf::VideoMode(960, 640), "RPG game"),
	mPlayer(),
	map(960, 640)
{
	mPlayer.setRadius(40.f);
	mPlayer.setPosition(100.f, 100.f);
	mPlayer.setFillColor(sf::Color::Cyan);
}

void Game::run()
{
	while (window.isOpen())
	{
		processEvents();
		update();
		render();
	}

}
