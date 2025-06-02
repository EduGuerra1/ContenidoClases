#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double r = 10;
    double n = 0, raiz = 0, raiz2 = 0;
    const double epsilon = 1e-12;
    cout << "CALCULAR RAIZ CUADRADA\n";
    cout << "Ingrese un numero: ";
    cin >> n;
    do
    {
        inicio:
        if(raiz2!= 0){
            raiz2 = raiz;
        }else{
            raiz2 = r;
        }
        raiz = ((n/raiz2)+raiz2)/2;

        raiz2 = raiz;
        raiz2 = ((n/raiz)+raiz)/2;
    
        if(abs(raiz2-raiz) >epsilon){
            goto inicio;
        }else{
          cout <<"\nLa raiz cuadrada de "<< n << " es: " << raiz2;
          return 0;
        }
    } while (abs(raiz2-raiz)<epsilon);



  return 0;
}

 