#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ask the user for two numbers
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate their sum and difference
    int sum = num1 + num2;
    int diff = num1 - num2;

    // Print the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}
