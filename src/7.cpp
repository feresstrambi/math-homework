#include <iostream>
#include <stdlib.h>

int main() {
    int randomNumber = rand() % 100 + 1;
    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;
}
