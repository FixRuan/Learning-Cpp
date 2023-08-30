#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  // alocação estática
  // int vet[11];

  // cout << "vet: [ ";
  // for (int i = 0; i <= 10; i++) {
  //   vet[i] = i;
  //   cout << vet[i] << " ";
  // }
  // cout << "]" << endl;

  // int x = sizeof(vet) / sizeof(int);
  // cout << "Tamanho do vetor: " << x << endl;

  int size;
  cout << "Informe o tamanho do vetor: ";
  cin >> size;

  int *vetor = new int[size];

  cout << "vetor: [ ";
  for (int i = 0; i < size; i++) {
    vetor[i] = i;
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;

  delete[] vetor;
  return 0;
}