#include <iostream>

using namespace std;

void sayHello() {
  cout << "Hello World" << endl;
}

int sum(int a, int b) {
  return a + b;
}

int main() {
  sayHello();
  cout << sum(10, 10);
  return 0;
}