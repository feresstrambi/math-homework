#include <iostream>
#include <string>
using namespace std;
int main() {
    // Prompt user for input
    string name;
    cout << "What is your name? ";
    getline(cin, name);
    
    // Display output
    cout << "Hello, " << name << "!";
    return 0;
}
