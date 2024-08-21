#include <iostream>
#include <cmath>
using namespace std;
#include "calculator.h"

int main()
{
	calculator c1;
    int ch,n1 , n2;

    cout << "enter 2 numbers :" << endl;
    cin >> n1 >> n2;

    cout << "\nEnter 1 to Add 2 numbers:" << "\nEnter 2 to Subtract 2 Numbers:"
        << "\nEnter 3 to Multiply 2 Numbers:" << "\nEnter 4 to Divide 2 Numbers:"
        << "\nEnter 0 To Exit" << endl;
   
    do {
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Result: " << c1.add(n1,n2) << endl;
            break;
        case 2:
            cout << "Result: " << c1.sub(n1,n2) << endl;
            break;
        case 3:
            cout << "Result: " << c1.mul(n1,n2) << endl;
            break;
        case 4:
            cout << "Result: " << c1.div(n1,n2) << endl;
            break;
        }
    } while (ch >= 1 && ch <= 4);

	

}
