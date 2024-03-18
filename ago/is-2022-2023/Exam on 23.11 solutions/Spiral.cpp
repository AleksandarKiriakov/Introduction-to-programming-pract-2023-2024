#include <iostream>
using std::cout;
using std::cin;
using std::endl;
const int maxSize = 50;

bool checkBounds(int x, int y, int size)
{
	return x >= 0 && y >= 0 && x < size && y < size;
}

int main()
{
	int size, spiral[maxSize][maxSize] = { 0 }, changeX, changeY, x = 0, y = 0;
	char delimiter;
	cin >> size >> delimiter;
	changeX = 1;
	changeY = 0;
	for (size_t i = 1; i < size * size + 1; i++)
	{
		spiral[x][y] = i;
		if (!checkBounds(x + changeX, y + changeY, size) ||
			spiral[x + changeX][y + changeY] != 0)
		{
			if (changeX == 1) //these 4 statements can be simplified using algebra to just 3 rows
			{
				changeX = 0;
				changeY = 1;
			}
			else if (changeY == 1)
			{
				changeX = -1;
				changeY = 0;
			}
			else if (changeX == -1)
			{
				changeX = 0;
				changeY = -1;
			}
			else if (changeY == -1)
			{
				changeX = 1;
				changeY = 0;
			}
		}
		x += changeX;
		y += changeY;
	}


	for (size_t i = 0; i < 2 * size + 1; i++)
	{
		for (size_t j = 0; j < 2 * size + 1; j++)
		{
			if (i % 2 == 0 || j % 2 == 0)
			{
				cout << delimiter << "\t";
			}
			else
			{
				cout << spiral[(j - 1) / 2][(i - 1) / 2] << "\t";
			}
		}
		cout << "\n\n\n";
	}
	return 0;
}
