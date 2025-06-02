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


    if(num1 % num2 == 0 && num1>num2){
        cout << "El numero menor es divisible entre el mayor\n";
        cout << num2 << " / " << num1 << " = " << num2/num1;
    }else if (num2 % num1 == 0 && num1<num2){
        cout << "El numero menor es divisible entre el mayor\n";
        cout << num1 << " / " << num2 << " = " << num1/num2;
    }else{
        cout << "El numero menor no es divisible entre el mayor";
    }

  return 0;
}
