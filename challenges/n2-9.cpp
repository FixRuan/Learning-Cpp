// Crie um Algoritmo em C++ utilizando apenas
// ponteiros, em que o usuário informa a idade de duas
// pessoas, e o Algoritmo informa a média destas duas
// idades.

#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int *idade1 = new int;
  int *idade2 = new int;

  cout << "Informe a idade 1: ";
  cin >> *idade1;

  cout << "Informe a idade 2: ";
  cin >> *idade2;

  float *media = new float;
  *media = (*idade1 + *idade2) / 2;
  cout << "media: " << *media;

  delete idade1;
  delete idade2;
  return 0;
}