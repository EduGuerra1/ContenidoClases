#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    //Se declaran las variables
  float base = 0, altura = 0, resultado = 0;

    cout << "Para calcular el area de un triangulo, ingrese su base: ";
    cin >> base;
    if(base > 0){
        cout << "Ahora, ingrese la altura: ";
        cin >> altura;
        if(altura >0){
            resultado = (base * altura) / 2;
            cout << "El area del triangulo es: " << resultado;
        }else{
             cout << "El valor de la altura no puede ser 0";
        }
    }else{
        cout << "El valor de la base no puede ser 0";
    }

  return 0;
}
