#include <iostream>

using namespace std;

int main() {
    cout << "Enter laptop price: ";
    unsigned price;
    cin >> price;

    cout << "Enter USB ports: ";
    unsigned ports;
    cin >> ports;
    
    cout << "Enter RAM: ";
    unsigned memory;
    cin >> memory;

    cout << "Enter wheter the laptop has SSD card (0 or 1): ";
    bool hasSSD;
    cin >> hasSSD;

    bool willBuy = (price >= 1000 && price <= 1500 && ports >= 3 && memory >= 8 && hasSSD) 
                    || ((!hasSSD || memory < 8) && price <= 800);

    cout << "Will Tishko buy the laptop: " << willBuy;

    return 0;
}