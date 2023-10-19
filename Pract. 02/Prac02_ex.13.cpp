
#include <iostream>
using namespace std;

//int main()
//{
//  //.ex.13
//
//	int number;
//	cout << "Enter 4-digit natural number (1000 - 9999): ";
//	cin >> number;
//	int num1, num2;
//	num1 = (number / 1000) * 10 + (number % 10);
//	num2 = ((number / 100) % 10) * 10 + ((number / 10) % 10);
//	if (num1 > num2)
//	{
//		cout << "greater " << num1 << ">" << num2 << endl;
//	}
//	else if (num1 == num2)
//	{
//		cout << "equal " << num1 << "=" << num2 << endl;
//	}
//	else if (num1 < num2)
//	{
//		cout << "less " << num1 << "<" << num2;
//	}
//}
//

//int main()
//{
//	//*
//
//	int price, usbPorts, ramGB;
//  bool diskSSD;
//	cout << "Enter the price: ";
//	cout << "Enter the usbPorts: ";
//	cout << "Enter the ramGB: ";
//	cout << "Enter if it has a SSD: ";
//	cin >> price >> usbPorts >> ramGB >> diskSSD;
//	if ((price >= 1000 && price <= 1500) && usbPorts >= 3 && ramGB >= 8 && diskSSD)
//	{
//		cout << "Tishko will buy this computer.";
//	}
//	else if ((price <= 800) && (!diskSSD || ram < 8)
//	{
//		cout << "Tishko will buy it." ;
//	}
//	else
//	{
//		cout << "Tishko won't buy a computer!" ;
//	}
//}

int main()
{
	//**

	int tomatoes, peppers, carrots, olives, potatoes, spices;
	cout << "Enter how many tomatoes does he have: ";
	cout << "Enter how many peppers does he have: ";
	cout << "Enter how many carrots does he have: ";
	cout << "Enter how many olives does he have: ";
	cout << "Enter how many potatoes does he have: ";
	cout << "Enter how many spices does he have: ";
	cin >> tomatoes >> peppers >> carrots >> olives >> potatoes >> spices;
	bool friendHelp;
	//Ако ще прави студентска салата, ще му трябват 1 домат, 2 чушки, 4 моркова, 3 маслини, 3 картофа и 150мл овкусители.
	if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && spices >= 150)
	{
		cout << "Traicho will prepare student's salad.";
	}
	//Ако ще прави студентска супа, ще му трябват 2 домата, 3 чушки, 5 моркова, 6 маслини, 10 картофа и 200мл овкусители.
	else if (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && spices >= 200 && friendHelp)
	{
		cout << "Traicho will prepare student's soup.";
	}
	//Ако ще прави студентски гювеч(и за приятели), ще му трябват 5 домата, 6 чушки, 12 моркова, 7 маслини, 12 картофа и 300мл овкусители.
	else if (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && spices >= 300 && friendHelp)
	{
		cout << "Traicho will prepare student's stew.";
	}
}
