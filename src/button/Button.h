#pragma once
#include <SFML/Graphics.hpp>

class Button
{
	sf::RectangleShape button;

public:
	Button(sf::Color color, float height, float length, float originX, float originY, float posX, float posY);

	virtual void CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor);
	sf::RectangleShape GetButton();
};

