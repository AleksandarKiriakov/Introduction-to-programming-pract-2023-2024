

#include <iostream>
using namespace std;

int main()
{
    //ex.8
    int number;
    cout << "Enter a number: ";
    cin >> number;
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;
    int symbolNum = 1;
    int firstStage = number;
    int secondStage = number - 1;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= firstStage; j++)
        {
            if (j<firstStage)
            {
                cout << " ";
            }
            else
            {
                
                for (int z = 0; z < symbolNum; z++)
                {
                    cout << symbol;
                }
                symbolNum += 2;
                cout << endl;
            }
        }
        firstStage--;
        
    }
    firstStage += 2;
    symbolNum -= 4;
    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j<=firstStage; j++)
        {
            
            if (j<firstStage)
            {
              
                cout << " ";
            }
            else
            {
                for (int z = 0; z < symbolNum; z++)
                {
                    cout << symbol;
                }
                symbolNum -= 2;
                cout << endl;
            }

        }
        firstStage++;

    }
}
