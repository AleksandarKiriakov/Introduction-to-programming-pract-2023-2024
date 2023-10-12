
#include <iostream>

int main()
{
    double amountBgn, amountEur, amountDollar;
    std::cout << "Enter BGN:" << std::endl;
    std::cin >> amountBgn;
    amountEur = amountBgn * 1.95;
    amountDollar = amountBgn * 1.84;
    std::cout << "BGN => EURO: " << amountEur << std::endl;
    std::cout << "BGN => Dollar: " << amountDollar;
}