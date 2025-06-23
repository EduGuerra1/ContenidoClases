#include <iostream>
using namespace std;
int mcd (int, int);

int main(void) { 
    //Se declaran las variables
    int numMayor = 0, numMenor = 0, residuo = 0, residuo2= 0;;
    //Se solicitan las variables al usuario
    cout << "----------CALCULO DEL MCD DE DOS NUMEROS----------";
    cout << "\nDigite el numero mayor: ";
    cin >> numMayor;
    cout << "Digite el numero menor: ";
    cin >> numMenor;

    
    cout << "El mcd es: " << mcd(numMayor, numMenor);
    return 0;
}

int mcd (int x, int y){
    int r = 0;
    do
    {

       r =  x % y;
        if(r != 0){
            x = y;
            y = r;
        }
    } while (r != 0);
    return y;
}