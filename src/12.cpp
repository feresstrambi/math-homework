#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Create a vector of strings
    vector<string> mathHomework = {"1 + 2 =", "5 - 3 =", "10 / 2 =", "7 * 3 ="};

    // Print the homework problems to the console
    for (int i = 0; i < mathHomework.size(); i++) {
        cout << mathHomework[i] << endl;
    }

    return 0;
}
