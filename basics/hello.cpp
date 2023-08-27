#include <iostream>

using namespace std;

int main() {
  int age = 19;
  string name = "Ruan";
  float weight = 68.2;

  cout << "Informe seu nome: ";
  cin >> name;

  cout << "Informe a sua idade: ";
  cin >> age;

  cout << "Informe seu peso: ";
  cin >> weight;

  cout << age << " " << name << " " << weight;

  return 0;
}