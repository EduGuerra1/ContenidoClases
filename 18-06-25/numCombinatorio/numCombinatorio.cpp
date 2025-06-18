#include <iostream>
using namespace std;

int factorial(int num) {
  // Se declaran las variables
  int n, k, fact;
  // Se asigna el valor del numero a "n"
  n = num;
  fact = 1;
  //Se calcula el factorial
  for (k = 1; k <= n; k++) {
    fact *= k;
  }
  //Se retorna el factorial
  return fact;
}

int main() {
  //Se declaran las variables
  int n = 0, k = 0, comb = 0, fact =0;
  cout << "CALCULO COMBINATORIO DE N Y K\n";
  cout << "Ingrese n: ";
  cin >> n;
  cout << "Ingrese k: ";
  cin >> k;
  //Se calcula el numero combinatorio
  comb = factorial(n) / (factorial(k) * factorial(n-k));
  //Se muestra el numero combinatorio
  cout << "El numero combinatorio es: " << comb;
  return 0;
}
