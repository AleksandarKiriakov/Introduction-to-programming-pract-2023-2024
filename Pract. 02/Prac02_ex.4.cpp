
#include <iostream>
using namespace std;


int main()
{
   
	//ex.4

    int percentage;

    cout << "Enter the percentage of the exam: ";
    cin >> percentage;

    if (percentage >= 90)
    {
        cout << "Grade: 6+" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Grade: 6" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade: 5" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade: 4" << endl;
    }
    else if (percentage >= 40)
    {
        cout << "Grade: 3" << endl;
    }
    else
    {
        cout << "Grade: 2";
    }
}
