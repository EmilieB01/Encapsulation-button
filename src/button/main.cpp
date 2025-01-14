#include <SFML/Graphics.hpp>
#include "Button.h"
#include "QuitButton.h"
#include "ChangeColorButton.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Button");

    sf::View v = window.getView();
    v.setCenter(0, 0);
    window.setView(v);

    ChangeColorButton buttonChangeColor(sf::Color::White, 200, 50, 100, 25, 0, 0);
    QuitButton buttonQuit(sf::Color::Red, 200, 50, 100, 25, 0, 200);

    sf::Color clearColor = sf::Color::Black;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        bool mousePress = false;
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePress = true;
                }
            }
        }

        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);

        
        buttonChangeColor.CheckBounds(worldMousePos, window, mousePress, clearColor);
        buttonQuit.CheckBounds(worldMousePos, window, mousePress, clearColor);

        // clear the window with black color
        window.clear(clearColor);

        // draw everything here...
        window.draw(buttonChangeColor.GetButton());
        window.draw(buttonQuit.GetButton());

        // end the current frame
        window.display();
    }

	return 0;
}
