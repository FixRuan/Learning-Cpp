#include <iostream>

using namespace std;

int main() {
  int x, y;

  cout << "Informe x: " << endl;
  cin >> x;

  cout << "Informe y: " << endl;
  cin >> y;

  if (x > y) {
    cout << x << " e maior que " << y;
    return 0;
  }

  if (y > x) {
    cout << y << " e maior que " << x;
    return 0;
  }

  cout << x << " e " << y << " sao iguais";

  return 0;
}