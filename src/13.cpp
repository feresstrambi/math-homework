#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(0));
  int num1 = rand() % 10 + 1;
  int num2 = rand() % 10 + 1;
  cout << "What is " << num1 << " x " << num2 << "?" << endl;
  int answer;
  cin >> answer;
  if (answer == num1 * num2) {
    cout << "Correct!" << endl;
  } else {
    cout << "Incorrect. The correct answer is " << num1 * num2 << endl;
  }
  return 0;
}
