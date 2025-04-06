#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        std::cout << "The first number is larger." << std::endl;
    } else if (num1 < num2) {
        std::cout << "The second number is larger." << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}
