#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int num1 = 0;
    string semana[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};

    cout << "Ingrese un numero entero entre 1 y el 7: ";
    cin >> num1;
    if(num1>=1 && num1<=7){
        cout << "El dia de la semana es: " << semana[num1-1];
    }else{
        cout << "Error. El numero tiene que ser entre 1 y 7";
    }

  return 0;
}
