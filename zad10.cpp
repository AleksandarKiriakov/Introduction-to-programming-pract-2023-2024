#include <iostream>
//zadacha 10

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {

		for (int j = 0; j < n; j++) {

			if (j % 2 == 0)
			{
				std::cout << (j * n) + i << " ";
			}
			else {

				std::cout << n * (j + 1) - (i - 1) << " ";
			}
		}

		std::cout << std::endl;
	}
}
