#include <iostream>


int reverse(int n) {

	int rem = 0;
	int reverse = 0;

	while (n != 0)
	{
		rem = n % 10;
		(reverse *= 10) += rem;
		n /= 10;
	}

	return reverse;
}
int countDigits(int n) {

	int counter = 0;

	while (n != 0) {
		counter++;
		n /= 10;
	}

	return counter;
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
	reverse(res);
	print(res, countDigits(n));
}

int main()
{
	int n;
	std::cin >> n;
	int res = 0;
	sortNumber(n, res);

}

