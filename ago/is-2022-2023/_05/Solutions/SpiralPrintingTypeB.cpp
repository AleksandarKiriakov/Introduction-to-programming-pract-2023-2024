#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int size;
	cin >> size;

	for (size_t j = 0; j < size; j++)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << (i + i % 2) * size + j + 1 - 2 * (i % 2) * j - (i % 2) << "\t";
		}
		cout << endl;
	}

	return 0;
}

