#include <iostream>
using namespace std;

int main() {
    string cadena = "", cadena_i;
    int i = 0, j = 0;

    cout << "Ingrese una frase: ";
    getline(cin, cadena,'\n');

    for ( i = cadena.length(); i > 0; i--)
    {
        cadena_i += cadena[i-1];
    }

    if(cadena.compare(cadena_i) ){
        cout << "La frase: " << cadena << " es palindrome.";
    }else{
        cout << "La frase: " << cadena << " no es palindrome.";
    }

    
  return 0;
}