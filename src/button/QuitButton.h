#pragma once
#include "Button.h"

class QuitButton : public Button
{
public:
	QuitButton(sf::Color color, float height, float length, float originX, float originY, float posX, float posY);

	void CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor) override;
};

