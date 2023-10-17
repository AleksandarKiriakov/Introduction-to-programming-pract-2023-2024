#include <iostream>
using namespace std;
int main() {

	cout << "Price: ";
	int price;
	cin >> price;

	cout << "Ram: ";
	int ram;
	cin >> ram;

	cout << "USB: ";
	int usbCount;
	cin >> usbCount;

	cout << "SSD: ";
	int ssd;
	cin >> ssd;


	bool isValid = (price>=1000 && price <=1500 && usbCount >= 3 &&  ram >= 8 && ssd == 1) || (price <=800 && usbCount >= 3 && ram >= 8 && ssd == 0) || (price <= 800 && usbCount >= 3 && ram < 8 && ssd == 1) ;


	if (isValid) {

		cout << "Tishko will buy laptop";

	}
	else {

		cout << "Tishko won't buy laptop";

	}




}