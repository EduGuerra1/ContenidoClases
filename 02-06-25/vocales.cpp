#include <iostream>
using namespace std;

int main() {
    string cadena = "";
    int a, e, i, o, u;
    a = e = i = o = u = 0;

    cout << "Ingrese una frase: ";
    getline(cin, cadena,'\n');

    for ( int j = 0; j <= cadena.length() -1; j++)
    {
        
        if(cadena[j] == 'a'){
            //  cout << cadena[j] <<" = a \n";
            a++;
        }else if(cadena[j] == 'e'){
            e++;
            // cout << cadena[j] <<" = e \n";

        }else if(cadena[j] == 'i'){
            i++;
            // cout << cadena[j] <<" = i \n";
        }else if(cadena[j] == 'o'){
            o++;
        //  cout << cadena[j] <<" = o \n";
        }else if(cadena[j] == 'u'){
            u++;
        }
    }
    cout << "Cantidad de 'a': " << a << "\nCantidad de 'e': " << e << "\nCantidad de 'i': " << i <<"\nCantidad de 'o': " << o << "\nCantidad de 'u'; " << u;
    
  return 0;
}