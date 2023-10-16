// OneDigitNumber_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Ex. 8
    short digit; //Int can also be used, but in my case short will come in handy because it takes up to 2 bytes only, 
                 //and int will use up to 4 
    
    std::cout << "Arabic numeral: ";
    std::cin >> digit;

    switch (digit)
    {
        case 1: std::cout << "Roman numerals: I"; 
            break;
        case 2: std::cout << "Roman numerals: II"; 
            break;
        case 3: std::cout << "Roman numerals: IIV"; 
            break;
        case 4: std::cout << "Roman numerals: IV"; 
            break;
        case 5: std::cout << "Roman numerals: V"; 
            break;
        case 6: std::cout << "Roman numerals: VI"; 
            break;
        case 7: std::cout << "Roman numerals: VII"; 
            break;
        case 8: std::cout << "Roman numerals: VIII"; 
            break;
        case 9: std::cout << "Roman numerals: IX"; 
            break;

        default: std::cout << "Please, input a digit from 1 to 9"; 
            break;
    }
}
