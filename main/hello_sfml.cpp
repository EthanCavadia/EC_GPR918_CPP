#include <SFML/Main.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

float x;
float y;
int main()
{
    sf::RenderWindow window(sf::VideoMode(300, 300), "My Awesome Ultra Super window");
	sf::Sprite spriteTest;
	sf::Texture textureTest;

	if (!textureTest.loadFromFile("data/other_play.png"))
	{
		return  EXIT_FAILURE;
	}
	spriteTest.setTexture(textureTest);
	spriteTest.setPosition(50, 50);
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event{};
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

		window.clear(sf::Color::Black);
		window.draw(spriteTest);
		window.display();
    }
    return EXIT_SUCCESS;
}