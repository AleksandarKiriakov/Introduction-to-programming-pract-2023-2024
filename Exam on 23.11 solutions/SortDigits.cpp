#include <iostream>


int countingDigitsAndReverseNumber(int& n) {

	int countOfDigits = 0;
	int nSave = n;
	n = 0;

	while (nSave != 0)
	{

		(n *= 10) += nSave % 10;
		nSave /= 10;
		countOfDigits++;

	}

	return countOfDigits;
}


void print(int digits, int counter) {

	for (size_t i = 1; i <= counter; i++)
	{

		if (i % 2 == 1) //i % 2 == 0 if you want to encrypt even index
		{
			std::cout << "$";
		}
		else
		{
			std::cout << digits % 10;
		}

		digits /= 10;
	}
}

void sortNumber(const int& n, int& res) {

	int nSave = 0;
	for (size_t i = 9; i > 0; i--)
	{
		nSave = n;

		while (nSave != 0)
		{
			int digit = nSave % 10;

			if (digit == i)
			{
				(res *= 10) += digit;
			}

			nSave /= 10;
		}
	}

	print(res, countingDigitsAndReverseNumber(res));

}

int main()
{
	int n;
	std::cin >> n;
	int res = 0;
	sortNumber(n, res);

}