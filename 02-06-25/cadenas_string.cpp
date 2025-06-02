#include <iostream>
using namespace std;

int main() {
    string cadena = "", cadena_i;
    char aux;
    int i = 0, j = 0;

    cout << "Ingrese una frase: ";
    getline(cin, cadena,'\n');

    for ( i = cadena.length(); i > 0; i--)
    {
        cadena_i += cadena[i-1];
    }
    cout << "Frase original: " << cadena << "\nFrase invertida: " << cadena_i;

    //OTRA VS

    i = 0;
    j = cadena.length();
    while (i>j)
    {
        aux = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = aux;
        i++;
        j--;
    }
    
    
  return 0;
}