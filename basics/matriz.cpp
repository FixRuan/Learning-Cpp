#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int matriz[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Informe um valor: ";
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}