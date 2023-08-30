#include <iostream>
#include <math.h>

using namespace std;

// f(x) = x² - 3x + 5

float fx(float x) {
  return ((pow(x, 2) - (3 * x)) + 5);
}

int main() {

  cout << fx(2);

  return 0;
}