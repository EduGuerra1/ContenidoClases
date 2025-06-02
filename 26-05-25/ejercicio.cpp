#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double k = 1, resultado = 0, x = 0, n = 0;
  cout << "Ingrese un numero: ";
  cin >> x;
  cout << "\nCuantos terminos quiere incluir?: ";
  cin >> n;

  // Procedimiento
  if (abs(x) >= 1) {
    cout << "\nFormula no aplicable para este valor de x";
  } else {
    for (int i = k; i <= n; i++) {
      resultado += (pow(-1, (i - 1)) / i) * pow(x, i);
      
    }
    cout << "\nEl resultado es ln(1 + " << x << ") es: " << resultado;
  }
  // resultado = (pow(-1,(k-1))/k) * pow (x, k);

  return 0;
}