#include "Button.h"

Button::Button(sf::Color color, float height, float length, float originX, float originY, float posX, float posY)
{
	button.setSize(sf::Vector2f(height, length));
	button.setFillColor(color);
	button.setOrigin(originX, originY);
	button.setPosition(posX, posY);
}

void Button::CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor)
{
	button.getGlobalBounds().contains(mousePos);
}

sf::RectangleShape Button::GetButton()
{
	return button;
}