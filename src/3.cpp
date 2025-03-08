#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 5;
  double x[n];
  double y[n];
  double z[n];

  for (int i = 0; i < n; i++) {
    x[i] = (double)i / n * 10;
    y[i] = sin(x[i]);
    z[i] = cos(y[i]);
    cout << "x[" << i << "] = " << x[i] << ", y[" << i << "] = " << y[i] << ", z[" << i << "] = " << z[i] << endl;
  }

  return 0;
}
