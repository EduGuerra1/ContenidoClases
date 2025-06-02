#include <math.h>

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  unsigned char caracter;
  char opcion = 0;
  int mayus = 0, minus = 0, digits = 0, otros = 0;


    inicio:
    cout << "Ingrese un caracter: ";
    cin >> caracter;


  if (isupper(caracter)) {
    cout << "Se introdujo una letra mayuscula.";
    mayus++;
  } else if (islower(caracter)) {
    cout << "Se introdujo una letra minuscula.";
    minus++;
  } else if (isdigit(caracter)) {
    cout << "Se introdujo un digito.";
    digits++;
  } else {
    cout << "El caracter ingresado no es una letra o digito.";
    otros++;
  }
    cout << "\n¿Desea introducir otra letra?y/n: ";
    cin >> opcion;
    if(opcion == 'y'){
        goto inicio;
    }else if(opcion == 'n'){
        goto final;
    }else{
        cout << "\nOpcion no valida.";
        goto final;
    }

    final:
    cout << "Cantidad de caracteres ingresados: \n";
    cout << "Mayusculas: " << mayus << "\nMinusculas: " << minus << "\nDigitos: " << digits << "\nOtros: " << otros;
    
  
//   if (caracter >= 65 && caracter <=90) {
//     cout << "Se introdujo una letra mayuscula.";
//   } else if (caracter >= 97 && caracter <=122) {
//     cout << "Se introdujo una letra minuscula.";
//   } else if (caracter >= 48 && caracter <=59) {
//     cout << "Se introdujo un digito.";
//   } else {
//     cout << "El caracter ingresado no es una letra o digito .";
//   }
  return 0;
}
