#include <iostream>
//zadacha 11

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {

            for (int j = ((i - 1) * n) + 1; j <= i * n; j++) {

                std::cout << j << " ";
            }
        }
        else {
            for (int s = i * n; s > (i - 1) * n; s--) {

                std::cout << s << " ";
            }
        }

        std::cout << std::endl;
    }
}

