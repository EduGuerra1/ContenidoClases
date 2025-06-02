#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int filas = 0;
//   string texto = "";
  cout << "Ingrese cuantas filas tendra el triangulo: ";
  cin >> filas;
  
  if(filas >20){
    cout << "La cantidad de filas supera el limite";
  }else{
    for (int i = 1; i <= filas; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout <<"\n";
       
    }
    
  }

  return 0;
}