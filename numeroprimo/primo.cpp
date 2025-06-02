#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    bool esPrimo;

    cout << "NUMEROS PRIMOS";
    cout << "\nIngrese un numero: ";
    cin >> num;

    if(num <= 0){
        cout << "\nLos numeros primos empiezan desde el 2";
    }
    for (int i = 2; i < (int) sqrt(num); i++)
    {
        if(num % i == 0){
            esPrimo = false;
           
            goto falso;
        }else{
            esPrimo = true;
        }
    }
    if(esPrimo == true){
        cout << "\nEl numero " << num << " es primo";
    }else{
        falso:
        cout << "\nEl numero " << num << " no es primo";
    }

  return 0;
}

 