

#include <iostream>
using namespace std;

int main()
{
    int  num;
    cin >> num;

	int copyOfNumber = num;
	int counter=0;
	while (num != 0)
	{
		num /=10;
		counter++;
		
	}

	int reversedResultNumber = 0; 
	if (counter % 2 == 0)
	{
		for (int i = 0; i < counter; i++)
		{
			if (i != counter / 2 && i != (counter / 2) - 1)
			{
				reversedResultNumber = reversedResultNumber * 10;
				reversedResultNumber = reversedResultNumber + copyOfNumber % 10;
				copyOfNumber = copyOfNumber / 10;
			}
			else 
			{
				copyOfNumber = copyOfNumber / 10;
			}
		}

		int resultNumber = 0;

		while (reversedResultNumber != 0)
		{
			resultNumber = resultNumber * 10;
			resultNumber = resultNumber + reversedResultNumber % 10;
			reversedResultNumber = reversedResultNumber / 10;
		}

		std::cout << resultNumber << ", " << resultNumber + 1;

	}
	else 
	{
		for (int i = 0; i < counter; i++)
		{
			if (i != counter / 2) 
			{
				reversedResultNumber = reversedResultNumber * 10;
				reversedResultNumber = reversedResultNumber + copyOfNumber % 10;
				copyOfNumber = copyOfNumber / 10;
			}
			else
			{
				copyOfNumber = copyOfNumber / 10;
			}
		}

		int resultNumber = 0;

		while (reversedResultNumber != 0)
		{
			resultNumber = resultNumber * 10;
			resultNumber = resultNumber + reversedResultNumber % 10;
			reversedResultNumber = reversedResultNumber / 10;
		}

		std::cout << resultNumber << ", " << resultNumber + 1;
	}

}
