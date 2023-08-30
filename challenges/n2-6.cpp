// Crie um Algoritmo em C++, em que o usuário
// informa os gastos com alimentação de 5 famílias,
// calcula a média de gastos e diz de cada família, se
// seu gastou é abaixo da média, acima da média ou na
// média.

#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  float vetor[5];
  float soma;
  float media;

  for (int i = 0; i < 5; i++) {
    cout << "Informe o gasto da familia " << i + 1 << ": ";
    cin >> vetor[i];
  }

  for (int i = 0; i < 5; i++) {
    soma += vetor[i];
  }

  media = soma / 5;

  cout << endl;
  cout << "Media dos gastos: " << media << endl;
  cout << endl;

  for (int i = 0; i < 5; i++) {
    if (vetor[i] == media) {
      cout << "Familia " << i + 1 << " com gastos na media" << endl;
    }

    if (vetor[i] > media) {
      cout << "Familia " << i + 1 << " com gastos acima media" << endl;
    }

    if (vetor[i] < media) {
      cout << "Familia " << i + 1 << " com gastos abaixo media" << endl;
    }
  }

  return 0;
}