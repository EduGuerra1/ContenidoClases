#include <iostream>
using namespace std;

int main() {
  string frase, fraseConvertida = ""; 
    char palabra = ' ';
    cout << "LENGUAJE P\n";
    cout << "Ingrese una frase: \n";
    getline(cin, frase);

    for (int i = 0; i < frase.length() ; i++)
    {
        palabra = frase[i];
        cout << "\npalabra actual: " << palabra;
        switch (frase[i])
        {
        case 'a':
        fraseConvertida += frase[i] + "p" + frase[i];
            break; 
        case 'e':
        fraseConvertida +=  frase[i] + 'p' + frase[i];

            break;
        case 'i':
         fraseConvertida += frase[i] + 'p' + frase[i];

            break;
        case 'o':
         fraseConvertida += frase[i] + 'p' + frase[i];

            break;
        case 'u':
         fraseConvertida += frase[i] + 'p' + frase[i];

            break;
        default:
        fraseConvertida += frase [i];
            break;
        }
    }
    cout << "\nLa frase convertida es: \n" << fraseConvertida;
    
    
  return 0;
}