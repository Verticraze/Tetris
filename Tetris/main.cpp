#include<SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(480, 240), "Tetris");

	Texture TextBlock;
	TextBlock.loadfromFile("");

	while (window.isOpen())
	{
		Event e;
		while (pollEvent(e))
		{
			if (e.type = Event::closed)
			{
				window.close();
			}	
		}
		window.clear(Color::White);
		window.draw();
		window.display();

	}
	return 0;
}