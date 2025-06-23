#include <iostream>
using namespace std;
void cambioVariables(int *, int *);

int main (void){

    int a, b, aux;

    cout << "-----INTERCAMBIO DE VARIABLES-----\n";
    cout << "Digite a: ";
    cin >> a;
    cout << "Digite b: ";
    cin >> b;
    cambioVariables(&a,&b);

    cout << "Valor de a: " << a;
    cout << "\nValor de b: " << b;
    return 0;
}
void cambioVariables(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
    
  
}