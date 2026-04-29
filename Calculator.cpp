#include <iostream>
using namespace std;

int main() {
    int choice;
    int x1, x2;

    do {
        cout << "\nSimple Calculator\n";
        cout << "Enter option: 1) +  2) -  3) *  4) /  5) mod(x1,x2)  -1) Exit\n";
        cout << "\nYour selection -> ";
        cin >> choice;

        if (choice == -1) {
            cout << "Exiting program...\n";
            break;
        }

        cout << "\nEnter first number: ";
        cin >> x1;

        cout << "\nEnter second number: ";
        cin >> x2;

        switch(choice) {
            case 1:
                cout << x1 << " + " << x2 << " = " << x1 + x2 << endl;
                break;
            case 2:
                cout << x1 << " - " << x2 << " = " << x1 - x2 << endl;
                break;
            case 3:
                cout << x1 << " * " << x2 << " = " << x1 * x2 << endl;
                break;
            case 4:
                if (x2 != 0)
                    cout << x1 << " / " << x2 << " = " << (float)x1 / x2 << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;
            case 5:
                if (x2 != 0)
                    cout << "mod(" << x1 << "," << x2 << ") = " << x1 % x2 << endl;
                else
                    cout << "Error: Cannot mod by zero!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(true);

    return 0;
}