#include<SFML/Graphics.hpp>
#include<time.h>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(480, 240), "Tetris");

	Texture TextBlock;
	TextBlock.loadFromFile("images/tiles.png");

	Sprite SpriteBlock(TextBlock);
	SpriteBlock.setTextureRect(IntRect(0,0,18,18));

	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type = Event::Closed)
			{
				window.close();
			}
		}
		window.clear(Color::White);
		window.draw(SpriteBlock);
		window.display();

	}
	return 0;
}