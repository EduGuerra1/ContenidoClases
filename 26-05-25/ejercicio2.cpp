#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double resultado = 0, x = 0, m = 0, factorial = 1;
  cout << "Ingrese un numero: ";
  cin >> x;
  cout << "\nCuantos terminos quiere incluir?: ";
  cin >> m;

  // Procedimiento
  if (abs(x) < 0) {
    cout << "\nFormula no aplicable para este valor de x";
  } else {
    for (int n = 0; n <= m; n++) {
       factorial = 1;
        for (int i = 1; i <= 2*n; i++) {

            cout << "\n VALOR DE 2 * " << i;
        factorial = factorial * i;

        // cout <<" \nEL FACTORIAL ES " << factorial;
        }
      resultado += pow(-1, (n)) * pow(x,2*n) / factorial ;
      
    }
    cout << "\n El factorial es " << factorial;
    cout << "\nEl resultado es cos(x) es: " << resultado;
  }
  // resultado = (pow(-1,(n-1))/n) * pow (x, n);

  return 0;
}