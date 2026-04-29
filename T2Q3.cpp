#include <iostream>
using namespace std;

void drawBox(int w);
void drawFullLine(int w);
void drawEmptyLine(int w);

int main() {
    int width;

    while (true) {
        cout << "Enter the length of the side of the square between 1 to 20\n";
        cout << "(any other value to end): ";
        cin >> width;

        if (width == 0) {
            cout << "Ending program. Only integer values between 1 and 20 accepted\n";
            break;
        }

        if (width < 1 || width > 20) {
            cout << "Invalid input\n";
        } else {
            drawBox(width);
        }
    }

    return 0;
}

void drawBox(int w) {
    if (w == 1) {
        cout << "*\n";
        return;
    }

    drawFullLine(w);

    for (int i = 0; i < w - 2; i++) {
        drawEmptyLine(w);
    }

    drawFullLine(w);
}

void drawFullLine(int w) {
    for (int i = 0; i < w; i++) {
        cout << "*";
    }
    cout << endl;
}

void drawEmptyLine(int w) {
    cout << "*";

    for (int i = 0; i < w - 2; i++) {
        cout << " ";
    }

    cout << "*" << endl;
}