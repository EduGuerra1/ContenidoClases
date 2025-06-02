#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {

    int num1 = 0, num2 = 0, num3 = 0;
    bool validar = false;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el tercer numero para verificar si se encuentra en el intervalo de los numeros anteriores: ";
    cin >> num3;

    if(num2<num1){
        for (int i = num2 ;i < num1; i++)
        {
            // cout << i << " -- " <<num3 << "\n" ;
          if(i == num3){
            validar = true;
            cout << num3 << " Esta contenido en el intervalo de " << num2 << " y " << num1;
            return 0;
           }else{
            validar = false;
           }
        }
        if(validar != true){
            cout << num3 << " No esta contenido en el intervalo de " << num1 << " y " << num2;
        }
    }else if(num1<num2){
        for ( int i = num1 ;i < num2; i++)
        {
            // cout << i << " -- " <<num3 << "\n" ;
           if(i == num3){
            validar = true;
            cout << num3 << " Esta contenido en el intervalo de " << num2 << " y " << num1;
            return 0;
           }else{
            validar = false;
           }
        }
        if(validar != true){
            cout << num3 << " No Esta contenido en el intervalo de " << num1 << " y " << num2;
        }
    }else{
        cout << "El numero no esta contenido en el intervalo";
    }


  return 0;
}
