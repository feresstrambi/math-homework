#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * n / 2 << endl;
    } else {
        cout << n + 10 << endl;
    }
    return 0;
}
