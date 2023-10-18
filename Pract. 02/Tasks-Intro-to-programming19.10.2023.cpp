

#include <iostream>

int main()
{

	/*
	 // Task 1
	int year;
	std::cout << "Enter an year: ";
	std::cin >> year;

	if ((year % 4 == 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) 
	{
		std::cout << year << " Is a leap year.";
	}
	else 
	{
		std::cout << year << " Is not a leap year.";
	}
	*/


	/*
	// Task 2
	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;
	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
	{
		switch (symbol)
		{
		case 'A':
		case 'E':
		case 'O':
		case 'I':
		case 'U':
		case 'Y':
		case 'a':
		case 'e':
		case 'o':
		case 'i':
		case 'u':
		case 'y':
			std::cout << "This letter is a vowel. "; break;
		default:
			std::cout << "This letter is a consonant. "; break;

		}
	}
	else
	{
		std::cout << "Invalid symbol ";
	}
	*/


	/*
	// Task 3
	int number1, number2;
	std::cout << "Enter one number: ";
	std::cin >> number1;
	std::cout << "Enter another number: ";
	std::cin >> number2;
	std::cout << "The bigger number is " << (number1 > number2 ? number1 : number2);
	*/


	/*
	// Task 4
	unsigned int percent;
	std::cout << "Enter the value of the exam in percent: ";
	std::cin >> percent;

	if (percent == 90)
	{
		std::cout << "Grade: 6+ ";
	}
	else if (percent >= 80)
	{
		std::cout << "Grade: 6 ";
	}
	else if (percent >= 70)
	{
		std::cout << "Grade: 5 ";
	}
	else if (percent >= 60)
	{
		std::cout << "Grade: 4 ";
	}
	else if (percent >= 40)
	{
		std::cout << "Grade: 3 ";
	}
	else
	{
		std::cout << "Grade: 2 ";
	}
	*/



	/*
	// Task 5

	double a;
	double b;
	double c;
	std::cout << "Enter the sizes of the 3 sides of a triangle: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a < (b + c) && b < (a + c) && c < (b + a))
	{
		std::cout << "It's a valid triangle. ";
	}

	else {
		std::cout << "It's not a valid triangle. ";
	}
		*/


		/*
		// Task 6
		double a;
		double b;
		double c;
		std::cout << "Enter the coefficients of an equation of the type a * x^2 + b * x + c = 0 : " << std::endl;
		std::cin >> a >> b >> c;
		double d = b * b - 4 * a * c;
		double x1 = (-b + sqrt(d)) / 2 * a;
		double x2 = (-b - sqrt(d)) / 2 * a;
		if (d < 0)
		{
			std::cout << "The discriminant is less than 0, therefore the equation can't be solved." << std::endl;
		}
		else
		{
			std::cout << "The roots of the equation are " << x1 << " and " << x2;
		}
		*/

		/*
		// Task 7
		char symbol;
		std::cout << "Enter a symbol: ";
		std::cin >> symbol;
		if (symbol >= 'A' && symbol <= 'Z')
		{
			char smallLetter = symbol + 32;
			std::cout << smallLetter;
		}
		else if (symbol >= 'a' && symbol <= 'z')
		{
			char cappitalLetter = symbol - 32;
			std::cout << cappitalLetter;

		}
		else
		{
			std::cout << "Invalid symbol. ";
		}
		*/


		/*
		// Task 8
		unsigned int Number;
		std::cout << "Enter a number 1-10: ";
		std::cin >> Number;
		switch (Number)
		{
		case 1: std::cout << "Number in Roman numerals: I"; break;
		case 2: std::cout << "Number in Roman numerals: II"; break;
		case 3: std::cout << "Number in Roman numerals: III"; break;
		case 4: std::cout << "Number in Roman numerals: IV"; break;
		case 5: std::cout << "Number in Roman numerals: V"; break;
		case 6: std::cout << "Number in Roman numerals: VI"; break;
		case 7: std::cout << "Number in Roman numerals: VII"; break;
		case 8: std::cout << "Number in Roman numerals: VIII"; break;
		case 9: std::cout << "Number in Roman numerals: IX"; break;
		case 10: std::cout << "Number in Roman numerals: X"; break;
		default: std::cout << "Invalid number ";
		}
		*/


	/*
		// Task 9
	int a, b, c;
	std::cout << "Enter 3 whole numbers: " << std::endl;
	std::cin >> a >> b >> c;
	if ((a >= b) && (a >= c))
	{
		if (b >= c)
		{
			std::cout << "Numbers in descending order: " << " " << a << " "  << b << c;
		}
		else
		{
			std::cout << "Numbers in descending order: " << a << " " << c << " "  << b;
		}
		
	}
	else if ((b >= a) && (b >= c))
	{
		if (a >= c)
		{
			std::cout << "Numbers in descending order: " << b << " " << a << " " << c;
		}
		else
		{
			std::cout << "Numbers in descending order: " << b << " " << c << " " << a;
		}
		
	}
	else 
	{
		if (a >= b)
		{
			std::cout << "Numbers in descending order: " << c << " " << a << " " << b;
		}
		else
		{
			std::cout << "Numbers in descending order: " << c << " " << b << " "  << a;
		}
	}
	*/


	/*
	// Task 10
	double a, b;
	char symbol;
	std::cout << "Enter an operation:  ";
	std::cin >> a >> symbol >> b;
	switch (symbol)
	{
	case '+': std::cout << "Result: " << a + b; break;
	case '-': std::cout << "Result: " << a - b; break;
	case '*': std::cout << "Result: " << a * b; break;
	case '/': std::cout << "Result: " << a / b; break;
	default: std::cout << "Invalid operation"; break;
	}
	*/


	/*
	// Task 11
	char a, b, c;
	std::cout << "Enter 3 whole numbers: ";
	std::cin >> a >> b >> c;
	if ((a >= b) && (a >= c))
	{
		if (b >= c)
		{
			std::cout << "Highest possible number: " << a << b << c;
		}
		else
		{
			std::cout << "Highest possible number: " << a << c << b;
		}

	}
	else if ((b >= a) && (b >= c))
	{
		if (a >= c)
		{
			std::cout << "Highest possible number: " << b << a << c;
		}
		else
		{
			std::cout << "Highest possible number: " << b << c << a;
		}

	}
	else
	{
		if (a >= b)
		{
			std::cout << "Highest possible number: " << c << a << b;
		}
		else
		{
			std::cout << "Highest possible number: " << c << b << a;
		}
	}
	*/


	/*
	// Task 12
	unsigned int day;
	unsigned int month;
	std::cout << "Enter day and month: ";
	std::cin >> day >> month;
	if (month == 2)
	{
		if (day == 28)
		{
			std::cout << "Next day is: " << "1 " << ++month;
		}
		else
		{
			std::cout << "Next day is: " << ++day << " " << month;
		}
	}
	else if (month == 12)
	{
		if (day == 31)
		{
			std::cout << "Next day is: " << "1 " << " 1";
		}
		else 
		{
			std::cout << "Next day is: " << ++day << " " << month;
		}
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
	{
		if (day == 30)
		{
			std::cout << "Next day is: " << "1 " << ++ month;
		}
		else
		{
			std::cout << "Next day is: " << ++day << " " << month;
		}
	}
	else
	{
		if (day == 31)
		{
			std::cout << "Next day is: " << "1 " << ++ month;
		}
		else
		{
			std::cout << "Next day is: " << ++day << " " << month;
		}
	}
	*/



	/*
		//Task 13

		int number;
		int firstNewNumber;
		int secondNewNumber;

		std::cin >> number;

		firstNewNumber = (number / 1000) * 10 + number % 10;

		secondNewNumber =  (number / 100 % 10) * 10 + number / 10 % 10;

		std::cout << firstNewNumber << std::endl << secondNewNumber << std::endl;


		if (firstNewNumber >= secondNewNumber) {
			if (firstNewNumber == secondNewNumber) {
				std::cout << "equal: " << firstNewNumber << "=" << secondNewNumber;
			}
			else
			{
				std::cout << "greater: " << firstNewNumber << ">" << secondNewNumber;
			}
		}
		else {
			std::cout << "less: " << firstNewNumber << "<" << secondNewNumber;
		}
		*/



	/*
	 // Task *

	double price;
	unsigned int usbPorts;
	unsigned int ram;
	bool hasSSD = true;

	std::cout << "Enter price: ";
	std::cin >> price;

	std::cout << "Enter USB ports: ";
	std::cin >> usbPorts;

	std::cout << "Enter GB RAM: ";
	std::cin >> ram;

	std::cout << "Does it have SSD (1 for yes and 0 for no): ";
	std::cin >> hasSSD;

	if ((price <= 1500) && usbPorts >= 3 && ram >= 8 && hasSSD)
	{
		std::cout << "Tishko will buy the laptop. ";

	}
	else if (!hasSSD && ram <= 8) {
		std::cout << "Tishko won't buy the laptop. ";
	}
	else if ((!hasSSD || ram <= 8) && price <= 800 ) {

		std::cout << "Tishko will buy the laptop. ";

	}
	else {
		std::cout << "Tishko won't buy the laptop. ";
	}*/

	
		/*
		// Task **
		unsigned int tomatoes, peppers, carrots, olives, potatoes, oils;
		std::cout << "Enter quantity for : " << std::endl;
		std::cout << "Tomatoes: ";
		std::cin >> tomatoes ;
		std::cout << "Peppers: ";
		std::cin >> peppers ;
		std::cout << "Carrots: ";
		std::cin >> carrots ;
		std::cout << "Olives: ";
		std::cin >> olives ;
		std::cout << "Potatoes: ";
		std::cin >> potatoes ;
		std::cout << "Oils in ml: ";
		std::cin >> oils ;
		bool hasFriendForHelp;
		std::cout << "Will a friend come to help Traicho cook (1 for yes and 0 for no): ";
		std::cin >> hasFriendForHelp;
	
		if (hasFriendForHelp && tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && oils >= 300)
		{
			std::cout << "Traicho can make studentski gyuvech.";
		}
		else if (hasFriendForHelp && tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && oils >= 200)
		{
			std::cout << "Traicho can make studentska supa.";
		}
		else if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && oils >= 150)
		{
			std::cout << "Traicho can make stidentska salata. ";
		}
		else
		{
			std::cout << "Traicho can't make dinner. ";
		}
	*/


}
