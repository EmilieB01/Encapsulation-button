#pragma once
#include "Button.h"

class ChangeColorButton : public Button
{


public:
	ChangeColorButton(sf::Color color, float height, float length, float originX, float originY, float posX, float posY);

	void CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor) override;
};

