#include <iostream>

using namespace std;

int main(){
    //Se declaran las variables
    float num1 = 0,
        num2 =0,
        resultado = 0;
    //Se solicita el primer número
    cout << "Ingrese 2 numeros para sumarlos\nPrimer numero: ";
    cin >> num1;
    //Se solicita el segundo número
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    //Se suman ambos números y se asigna el resultado a la variable "resultado"
    resultado = num1 + num2;
    //Se muestra el resultado de la suma
    cout<< "La suma de los numeros es " << resultado ;
    return 0;
}