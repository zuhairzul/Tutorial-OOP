#include <iostream>
#include <iomanip> // For formatting decimals

using namespace std;

// --- Function Prototypes ---
// This tells the compiler that these functions exist even if they are defined later.
float calculateBMI(float weight, float height);
void displayCategory(float bmi);

int main() {
    float weight, height, bmi;

    cout << "--- BMI Calculator ---\n";
    cout << "Enter weight in kg: ";
    cin >> weight;

    cout << "Enter height in meters: ";
    cin >> height;

    // Call the calculation function
    bmi = calculateBMI(weight, height);

    // Format output to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nYour BMI = " << bmi << endl;

    // Call the category function
    displayCategory(bmi);

    return 0;
}

// --- Function Definitions ---

// Function to handle the math
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

// Function to handle the logic/output
void displayCategory(float bmi) {
    cout << "Your weight category is: ";
    
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Healthy" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obesity" << endl;
}   