#include <iostream>
using namespace std;
void swap_v2(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int x = 2, y = 4;
    
    cout << "\nX = " << x << ", Y = " << y;
    swap_v2(&x, &y); 
    
    cout << "\nAfter swapping" ;
    cout << "\nx = " << x; 
    cout << "\ny = " << y; 
    
    return 0;
}