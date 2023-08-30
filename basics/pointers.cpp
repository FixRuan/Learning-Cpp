#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int var1;
  int *pvar1;

  var1 = 5;
  pvar1 = &var1;

  cout << "Valor da variavel pelo nome: " << var1 << endl;
  cout << "Valor do endereco da var1: " << pvar1 << endl;
  cout << "Valor do var1 pelo ponteiro: " << *pvar1 << endl;

  int var2;
  // var2 = *pvar1;
  // cout << var2 << endl;

  // *pvar1 = 30;
  // cout << var1;

  var2 = 50;
  cout << var2 << endl;
  // pvar1 = &var2;

  // cout << *pvar1 << endl;

  // int *pvar2;
  // pvar2 = NULL;
  // cout << *pvar2;

  int *pvar3 = new int;
  *pvar3 = 35;

  cout << "pvar3: " << pvar3 << endl;
  cout << "*pvar3: " << *pvar3 << endl;

  delete pvar3;
  pvar3 = pvar1;
  cout << *pvar3 << endl;

  return 0;
}