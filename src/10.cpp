#include <iostream>
using namespace std;

int main() {
  cout << "Enter your name: ";
  string name;
  cin >> name;

  if (name == "Alice") {
    cout << "Hello, Alice!";
  } else {
    cout << "Hello, " << name << "!";
  }

  return 0;
}
