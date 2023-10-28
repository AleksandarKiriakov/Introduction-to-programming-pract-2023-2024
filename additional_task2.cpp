#include <iostream> 

using namespace std;

int main() {
    cout << "Tomatoes: ";
    unsigned tomatoes;
    cin >> tomatoes;

    cout << "Peppers: ";
    unsigned peppers;
    cin >> peppers;

    cout << "Carrots: ";
    unsigned carrots;
    cin >> carrots;

    cout << "Olives: ";
    unsigned olives;
    cin >> olives;

    cout << "Potatoes: ";
    unsigned potatoes;
    cin >> potatoes;

    cout << "Additives in ml: ";
    unsigned additives;
    cin >> additives;

    cout << "Will a friend come and help? (0 or 1): ";
    bool haveHelp;
    cin >> haveHelp;

    bool willEat = (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && additives >= 150) 
                || (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && additives >= 200 && haveHelp)
                || (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && additives >= 300 && haveHelp);

    cout << "Will Traicho eat: " << willEat;

    return 0;
}