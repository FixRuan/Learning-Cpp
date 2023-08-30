// Crie um Algoritmo em C++, em que o usuário
// informa a dimensão de uma matriz, e os elementos
// de duas matrizes (ambas com a mesma dimensão) e
// o Algoritmo mostra a soma entre estas duas
// matrizes.

#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int x, y;

  cout << "Informe a quantidade de linhas: ";
  cin >> x;

  cout << "Informe a quantidade de colunas: ";
  cin >> y;

  int matriz1[x][y];
  int matriz2[x][y];

  cout << endl;
  cout << "Matriz 1: " << endl;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << "informe (" << i + 1 << "," << j + 1 << "): ";
      cin >> matriz1[i][j];
    }
  }

  cout << endl;
  cout << "Matriz 1: " << endl;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << matriz1[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "Matriz 2: " << endl;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << "informe (" << i + 1 << "," << j + 1 << "): ";
      cin >> matriz2[i][j];
    }
  }

  cout << endl;
  cout << "Matriz 2: " << endl;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << matriz2[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "Soma: " << endl;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << matriz1[i][j] + matriz2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}