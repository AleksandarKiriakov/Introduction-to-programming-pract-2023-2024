#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int wall = 0;
const int walkable = 1;
const int marked = 2;
const int moves = 4;
const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

bool isValid(int x, int y, int width, int heigth)
{
	return x >= 0 && y >= 0 && x < width && y < heigth;
}

void DFS(int** table, int currX, int currY, int width, int heigth)
{
	if (!isValid(currX, currY, width, heigth) 
		|| table[currY][currX] != walkable)
	{
		return;
	}
	table[currY][currX] = marked;

	for (size_t i = 0; i < moves; i++)
	{
		DFS(table, currX + dx[i], currY + dy[i], width, heigth);
	}
}

int main()
{
	int** table;
	int width, heigth;
	cin >> width >> heigth;
	int startX, startY;
	cin >> startX >> startY;


	table = new int* [heigth];

	for (size_t i = 0; i < heigth; i++)
	{
		table[i] = new int[width];
		for (size_t j = 0; j < width; j++)
		{
			cin >> table[i][j];
		}
	}

	DFS(table, startX, startY, width, heigth);
	cout << endl;

	for (size_t i = 0; i < heigth; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < heigth; i++)
	{
		delete[] table[i];
	}
	delete[] table;
}
