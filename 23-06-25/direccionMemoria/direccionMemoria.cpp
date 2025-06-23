#include <iostream>
using namespace std;

int main(void){
    //Se declaran los punteros
    int *p;
    float *q;
    //Se declaran las variables
    int arr[8];
    int a = 0;
    float x = 0;
    cout << "--------MOSTRAR DIRECCIONES DE MEMORIA--------\n";
    p = &a;
    q = &x;

    cout << "La direccion de a es: " << &a << endl;
    cout << "La direccion de a es: " << p << endl;
    cout << "La direccion de x es: " << &x << endl;
    cout << "La direccion de x es: " << x << endl;

    cout << "Las direcciones de memoria son: ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}