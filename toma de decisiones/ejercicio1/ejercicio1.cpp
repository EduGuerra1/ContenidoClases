#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int num1 = 0, num2 = 0, resultado = 0;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    if(num1 % num2 == 0){
        cout << "El primer numero es divisible entre el segundo\n";
        cout << num1 << " / " << num2 << " = " << num1/num2;
    }else{
        cout << "El primer numero no es divisible entre el segundo";
    }

  return 0;
}
