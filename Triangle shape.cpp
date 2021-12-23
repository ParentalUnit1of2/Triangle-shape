#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        // We will make a 90 degree triangle with size and symbol input by user

    int length;

    cout << "Let's make a 90 degree triangle!\nPlease enter a lenth of the triangle: ";
    cin >> length;
    char symbol;
    cout << "Please enter your symbol choice: ";
    cin >> symbol;

    for (int i = 1; i <= length; i++) {

        for (int j = 1; j <= i; j++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

    cout << endl << endl;

    // This will create a mirror image of the previous one.

    for (int i = length; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }


    system("pause>0");
}

