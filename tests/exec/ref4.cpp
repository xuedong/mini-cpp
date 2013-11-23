#include <iostream>

void f(int &y) {
  y = y + 1;
}

int main() {
  int x = 41;
  std::cout << "x = " << x << "\n";
  f(x);
  std::cout << "x = " << x << "\n";
  int &z = x;
  f(z);
  std::cout << "x = " << x << "\n";
  std::cout << "z = " << z << "\n";
}
