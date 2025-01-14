#include "QuitButton.h"

QuitButton::QuitButton(sf::Color color, float height, float length, float originX, float originY, float posX, float posY) : Button(color, height, length, originX, originY, posX, posY)
{

}

void  QuitButton::CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor)
{
    if (GetButton().getGlobalBounds().contains(mousePos) && mousePress)
    {
        window.close();
    }
}