#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    
    if (number1 > number2) {
        cout << number1 << " is greater than " << number2 << endl;
    } else {
        cout << number2 << " is greater than " << number1 << endl;
    }
    
    return 0;
}
