#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int num1 = 0, num2 = 0, num3 = 0;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if(num1 % num3 == 0 && num2 % num3 == 0){
        cout << "Los primeros dos numeros son divisibles entre el tercero.\n" << num1 << "/" << num3 << " = " << num1/num3 << 
        "\n" << num2 << "/" << num3 << " = "<< num2/num3;
    }else if(num1 % num3 != 0 && num2 % num3 != 0){
        cout << "Ninguno de los dos primeros numeros es divisible entre el tercero";
    }else if (num1 % num3 != 0){
        cout << "El primer numero no es divisible entre el tercero";
    }else if (num2 % num3 != 0){
        cout << "El segundo numero no es divisible entre el tercero";
    }

  return 0;
}
