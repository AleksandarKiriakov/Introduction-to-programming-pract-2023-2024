// Zad-one_star.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Input: laptop price with parameters (USB ports, RAM volume, SSD existance)
	int laptopPrice, amountOfUsbPorts, gbRAM;
	bool existanceOfSSD = false;

	cout << "Enter laptop price: ";
	cin >> laptopPrice;
	cout << "Enter amount of USB ports: ";
	cin >> amountOfUsbPorts;
	cout << "Enter GBs of RAM: ";
	cin >> gbRAM;
	cout << "Does it include SSD disk? (use boolean or a number of SSDs) ";
	cin >> existanceOfSSD;

	bool metReqs = false;

	// Tishko wants to buy a laptop (ig can help solve his indecisiveness):
	// [1000, 1500] lv:
	// - USB ports >= 3
	// - RAM >= 8GB
	// - SSD disk == true
	// [0, 800] lv:
	// - SSD disk = false || RAM > 8GB
	if ( (laptopPrice >= 1000 && laptopPrice <= 1500)
		&& ( amountOfUsbPorts >= 3 && gbRAM >= 8 && existanceOfSSD) ) {
		metReqs = true;
	} else if ( (laptopPrice <= 800) && !existanceOfSSD ) {
		metReqs = true;
	}

	// Output: boolean telling if the laptop parameters and price match Tishko's reqs
	cout << "The laptop's build " << (metReqs ? "meets" : "doesn't meet") << " Tishko's requirements";
}

