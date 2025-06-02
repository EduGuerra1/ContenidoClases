#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int a = 0, b = 0, c= 0;
    double subRad = 0, x1 = 0, x2 = 0;
    cout << "Ingrese los valores\n";
    cout << "Valor de a: ";
    cin >> a;

    cout << "\nValor de b: ";
    cin >> b;

    cout << "\nValor de c: ";
    cin >> c;
    
    subRad = pow(b,2) - 4 * (a * c);

    if(subRad < 0){
        cout << "No existe solucion en los reales.\n";
    }else if (subRad == 0){
        cout << "Existe una sola raiz.\n";
        x1 = -b / (2 * a);
        cout << "La raiz unica es: x1= " << x1 << "\n"; 
    }else{
        x1 = (-b + sqrt(subRad)) / (2 * a);
        x2 = (-b - sqrt(subRad)) / (2 * a);
        cout << "Las dos raizes de la ecuacion son: x1= " << x1 <<"\nx2= " << x2 << "\n";
    }


  return 0;
}
