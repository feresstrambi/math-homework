#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    // Generate a random number between 1 and n (inclusive)
    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 0) { // Check if the number is even
            continue; // Skip this iteration
        }
        
        cout << "The next even number after " << i << ": " << i * 2;
    }
    
    return 0;
}
