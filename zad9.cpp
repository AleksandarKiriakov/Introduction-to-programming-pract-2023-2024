#include <iostream>

//zadacha 9

int main()
{
        int n;
        std::cin >> n;

        for (int i = 1; i <= n; i++){

            for (int j = n - i - 1; j >= 0; j--) {
                
                std::cout << " ";
            }

            for (int s = i; s >= 1; s--) {
                
                std::cout << s;
            }

            std::cout << std::endl;
        }

        for (int i = n - 1; i >= 1; i--){

            for (int j = n - i - 1; j >= 0; j--) {
                std::cout << " ";
            }

            for (int s = i; s >= 1; s--) {
                std::cout << s;
            }

            std::cout << std::endl;
        }

        
    }

