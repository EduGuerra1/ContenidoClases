#include <iostream>
using namespace std;

int main() {
    //Se declaran las variables
    string frase, fraseConvertida = ""; 
    //Se solicita la frase al usuario
    cout << "CODIFICACION DE PALABRAS\n";
    cout << "Ingrese una frase: \n";
    //Se guarda la frase
    getline(cin, frase);
    
    //Se recorre cada caracter de la frase
    for (char palabra : frase)
    {
        //Casos depenpiendo 
        switch (palabra)
        {
        case 'm':
        fraseConvertida += '0';
            break; 
        case 'u':
        fraseConvertida +=  '1';

            break;
        case 'r':
         fraseConvertida += '2';

            break;
        case 'c':
         fraseConvertida += '3';

            break;
        case 'i':
         fraseConvertida += '4';

            break;
        case 'e':
         fraseConvertida += '5';

            break;
        case 'l':
         fraseConvertida += '6';

            break;
        case 'a':
         fraseConvertida += '7';

            break;
        case 'g':
         fraseConvertida += '8';

            break;
        case 'o':
         fraseConvertida += '9';

            break;

        default:
        fraseConvertida += palabra;
            break;
        }
    }
    cout << "\nLa frase convertida es: \n" << fraseConvertida;
    
    
  return 0; 
}