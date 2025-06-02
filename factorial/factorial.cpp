#include <math.h>

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int num = 0, resultado = 1;

  cout << "FACTORIAL DE UN NUMERO\n";
  cout << "Ingrese un numero: ";
  cin >> num;

  if (num < 0) {
    cout << "El numero no puede ser negativo.";
  } else {
    
    for (int i = 1; i <= num; i++) {
      resultado *= i;
    }
    cout << "El factorial de " << num << " es: " << resultado;
  }

  return 0;
}
