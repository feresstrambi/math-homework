#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int num = 0;
  cout << "Enter a number: ";
  cin >> num;
  if (num % 2 == 0) {
    cout << "The number is even." << endl;
  } else {
    cout << "The number is odd." << endl;
  }
  return 0;
}
