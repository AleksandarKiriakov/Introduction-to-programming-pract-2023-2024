
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
	//��� �� ����� ���������� ������, �� �� ������� 1 �����, 2 �����, 4 �������, 3 �������, 3 ������� � 150�� ����������.
	if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && spices >= 150)
	{
		cout << "Traicho will prepare student's salad.";
	}
	//��� �� ����� ���������� ����, �� �� ������� 2 ������, 3 �����, 5 �������, 6 �������, 10 ������� � 200�� ����������.
	else if (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && spices >= 200 && friendHelp)
	{
		cout << "Traicho will prepare student's soup.";
	}
	//��� �� ����� ���������� �����(� �� ��������), �� �� ������� 5 ������, 6 �����, 12 �������, 7 �������, 12 ������� � 300�� ����������.
	else if (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && spices >= 300 && friendHelp)
	{
		cout << "Traicho will prepare student's stew.";
	}
}
