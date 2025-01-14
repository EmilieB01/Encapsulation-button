#include "ChangeColorButton.h"

ChangeColorButton::ChangeColorButton(sf::Color color, float height, float length, float originX, float originY, float posX, float posY) : Button(color, height, length, originX, originY, posX, posY)
{

}

void  ChangeColorButton::CheckBounds(sf::Vector2f mousePos, sf::RenderWindow& window, bool mousePress, sf::Color& clearColor)
{

    if (GetButton().getGlobalBounds().contains(mousePos) && mousePress)
    {
        if (clearColor == sf::Color::Black)
        {
            clearColor = sf::Color::Cyan;
        }
        else if (clearColor == sf::Color::Cyan)
        {
            clearColor = sf::Color::Yellow;
        }
        else if (clearColor == sf::Color::Yellow)
        {
            clearColor = sf::Color::Black;
        }
    }
}