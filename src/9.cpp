#include <iostream>
#include <cstdlib>

int main() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    std::cout << "What is " << num1 << " x " << num2 << "?\n";
    int answer;
    std::cin >> answer;
    if (answer == num1 * num2) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect, the correct answer is: " << num1 * num2 << "\n";
    }
}
