#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            cout << i * 2;
        }
    } else {
        cout << "The number is not positive.";
    }
}
