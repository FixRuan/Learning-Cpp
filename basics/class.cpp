#include <cstddef>
#include <iostream>
#include <math.h>

using namespace std;

class Carro {
private:
  int ano;
  float valor, km;

public:
  int getAno() {
    return this->ano;
  }

  void setAno(int ano) {
    this->ano = ano;
  }

  float getValor() {
    return this->valor;
  }

  void setValor(float valor) {
    this->valor = valor;
  }

  float getKm() {
    return this->km;
  }

  void setKm(float km) {
    this->km = km;
  }
};

main() {
  Carro palio;

  palio.setAno(2019);
  cout << palio.getAno();

  return 0;
}