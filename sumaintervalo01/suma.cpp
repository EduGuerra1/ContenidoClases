#include <math.h>

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int a, b, cont, acum;
    a = b = cont = acum = 0;

    cout << "Sumar intervalos de dos numeros";
    cout << "\n Digite a: ";
    cin >>a;

    cout << "\ndsdsdsdssdDigite b: ";
    cin >>b;

    do
    {
        acum = acum + cont;
        cont = cont + 1;
    } while (cont <= b);
    


  return 0;
}

