#include<SFML/Graphics.hpp>
#include<time.h>
using namespace sf;

const int M = 20;
const int N = 10;

int field[M][N] = {0};

struct Point 
{
	int x, y;
}a[4],b[4];

int figures[7][4] =
{
	1,3,5,7,
	2,4,5,7,
	3,5,4,6,
	3,5,4,7,
	2,3,5,7,
	3,5,7,6,
	2,3,4,5,
};
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
		int num = 4;
		for (int i = 0; i < 4; i++)
		{
			a[i].x = figures[num][i] % 2;
			a[i].y = figures[num][i] / 2;

		}
		window.clear(Color::White);
		for (int i = 0; i < 4; i++)
		{
			SpriteBlock.setPosition(a[i].x*18,a[i].y*18);
			window.draw(SpriteBlock);
		}
		window.display();

	}
	return 0;
}