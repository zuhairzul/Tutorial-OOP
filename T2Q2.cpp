#include <iostream>
using namespace std;

int main() {
    int side;
    
    while (true) {
        cout << "\nEnter the length of the side of the square between 1 to 20 (any other value to end): ";
        
 
        if (!(cin >> side) || side < 1 || side > 20) {
            cout << "Ending program. Only integer values between 1 and 20 accepted" << endl;
            break;
        }

        for (int i = 0; i < side; i++) {
            for (int j = 0; j < side; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}