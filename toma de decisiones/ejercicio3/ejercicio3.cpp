#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int num1 = 0, resultado = 0;

    cout << "Ingrese un numero entero: ";
    cin >> num1;
    if(num1 % 5 == 0 && num1 % 3 == 0){
        cout << "El numero es divisible entre 5 y 3.\n";
        cout << num1 << " / 5 = " << num1/5 << "\n" << num1 <<" / 3 = " << num1/3;
    }else{
        cout << "El numero no es divisible entre 5 y 3.";
    }

  return 0;
}
