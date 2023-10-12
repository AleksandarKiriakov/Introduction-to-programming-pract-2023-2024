#include <iostream>
using namespace std;

//int main()
//{
// //ex.1
// 
//	cout << "Oh what \na happy day!";
//	cout << "\nOh yes, \nwhat a happy day!";
//		
//}

//int main()
//{
// //ex.2
// 
//	double x = 5.4;
//	double y = 7.9;
//	double S, P;
//	P = 2 * x + 2 * y;
//	S = x * y;
//	cout << S << endl;
//	cout << P << endl;
//
//}

//int main()
//{
// //ex.3
// 
//	cout << "Enter your value in lv";
//	int lv;
//	cin >> lv;
//	double euro = lv * 0.51;
//	double dollar = lv * 0.54;
//	cout << euro << endl;
//	cout << dollar << endl;
//
//}

//int main()
//{
//	//ex.4
//
//	double a;
//	double b;
//	cout << "Please enter the length of the first side";
//	cin >> a;
//	cout << "Please enter the length of the second side";
//	cin >> b;
//	double P;
//	P = 2 * a + 2 * b;
//	double S;
//	S = a * b;
//	cout << P << endl;
//	cout << S;
//
//}


//int main()
//{
//
//	//ex.5
//
//	int number1;
//	int number2;
//	int number3;
//	cout << "Enter the first number: ";
//	cin >> number1;
//	cout << "Enter the second number: ";
//	cin >> number2;
//	cout >> "Enter the third number: ";
//	cin >> number3;
//	bool ascendingOrder = number1 < number2&& number2 < number3;
//	cout << ascendingOrder;
//
//}

//int main()
//{
//
//	//ex.6
//
//	int number1;
//	int number2;
//	cout << "Enter the first number: ";
//	cin >> number1;
//	cout << "Enter the second number: ";
//	cin >> number2;
//	cout << "The quotient of the division: " << number1 / number2 << endl;
//	cout << "The remainder of the division:" << number1 % number2;
//
//
//}


//int main()
//{
//
//	//ex.7
//
//	int apples;
//	int pears;
//	int bananas;
//	cout << "Apples: ";
//	cin >> apples;
//	cout << "Pears: ";
//	cin >> pears;
//	cout << "Bananas: ";
//	cin >> bananas;
//	cout<<"Pesho, don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";
//
//
//}


//int main()
//{
//
//	//ex.8
//
//	double r;
//	double pi = 3.14159265;
//	cout << "Enter the r: ";
//	cin >> r;
//	double P;
//	P = 2 * r * pi;
//	double S;
//	S = pi * r * r;
//	cout << P << endl;
//	cout << S;
//
//
//}

//int main()
//{
//
//	//ex.9
//
//	int a;
//	int b;
//	int c;
//	cout << "Enter a: ";
//	cin >> a;
//	cout << "Enter b: ";
//	cin >> b;
//	cout << "Enter c: ";
//	cint >> c;
//	double x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
//	double x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
//	cout << x1 << endl;
//	cout << x2;
//
//}


//int main()
//{
//
//	//ex.10
//
//	int number1;
//	int number2;
//	int number3;
//	cout << "first number: ";
//	cin >> number1;
//	cout << "second number: ";
//	cin >> number2;
//	number3 = number1;
//	number1 = number2;
//	number2 = number1;
//	cout << "first number: " << number1 << endl << "second number: " << number2;
//
//
//}


//int main()
//{
//
//	//ex.11
//
//	int a;
//	int b;
//	cout << "Enter the first number: ";
//	cin >> a;
//	cout << "Enter the second number: ";
//	cin >> b;
//	int min;
//	int max;
//	bool aIsSmaller = a < b;
//	min = aIsSmaller ? a : b;
//	max = aIsSmaller ? b : a;
//	cout << "Minimum: " << min << endl;
//	cout << "Maximum: " << max;
//
//
//}


//int main()
//{
//
//	//ex.12
//
//	int seconds;
//	int minutes;
//	int days;
//	int hours;
//	cout << "seconds: ";
//	cin >> seconds;
//	days = seconds / (60 * 60 * 24);
//	seconds %= 60 * 60 * 24;
//	hours = seconds / (60 * 60);
//	seconds %= 60 * 60;
//	minutes = seconds / 60;
//	seconds = seconds % 60;
//	cout << "Days: " << days << endl;
//	cout << "Hours: " << hours << endl;
//	cout << "Minutes: " << minutes << endl;
//	cout << "Seconds: " << seconds;
//
//
//}


//int main()
//{
//
//	//ex.13
//
//	int number1;
//	int number2;
//	cout << "Enter the first number: ";
//	cin >> number1;
//	cout << "Enter the second number: ";
//	cin >> number2;
//	bool biggerNumber = (number1 > number2) || (number2 > number1);
//	cout << biggerNumber;
//
//
//}


//int main()
//{
//
//	//ex.14
//
//	int password;
//	int units;
//	int dozens;
//	int hundreds;
//	int thousands;
//	cout << "Enter 16-digit password: ";
//	cin >> password;
//	units = password % 10;
//	dozens = password / 10 % 10;
//	hundreds = password / 100 % 10;
//	thousands = password / 1000 % 10;
//	cout << "XXXXXXXXXXXX" << thousands << hundreds << dozens << units;
//
//
//}