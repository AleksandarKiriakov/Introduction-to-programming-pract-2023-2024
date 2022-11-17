#include <iostream>
#include <windows.h> //only used for pretty output (works only on windows)

using namespace std;

const int maxSize = 50; 

void print(char arr[][maxSize], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int size;
	char arr[maxSize][maxSize];

	cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr[i][j] = ' ';
		}
	}

	int changeX = 1, changeY = 0, x = 0, y = 0;

	for (size_t i = 0; i < 4 * size - 3; i++)
	{
		arr[y][x] = '#';

		system("cls"); //only to make it look pretty
		print(arr, size);
		Sleep(50); //without a delay before deletion modern computers do this too fast (sometimes faster than the output)

		//changing direction here
		if (x == (size - 1) && y == 0)
		{
			changeX = 0;
			changeY = 1;
		}
		if (x == (size - 1) && y == (size / 2))
		{
			changeX = -1;
			changeY = 0;
		}
		if (x == 0 && y == (size / 2))
		{
			changeX = 0;
			changeY = 1;
		}
		if (x == 0 && y == (size - 1))
		{
			changeX = 1;
			changeY = 0;
		}

		x += changeX;
		y += changeY;
	}

	return 0;
}
