#include "fstream"
#include "iostream"
#include "string"
using namespace std;
int main(void) {
  int dato;
  ifstream archivo("misnumeros.txt");
  ofstream positivos("positivos.txt");
  ofstream negativos("negativos.txt");
  if (!archivo) {
    cout << "El archivo no existe";
  } else {
    while (!archivo.eof()) {
      archivo >> dato;
      if (dato >= 0) {
        positivos << dato << endl;
      } else {
        negativos << dato << endl;
      }
      archivo >> dato;
    }
    archivo.close();
    positivos.close();
    negativos.close();


    ifstream pos("positivos.txt");
    ifstream neg("negativos.txt");

    cout << "El archivo de los positivos es: " << endl;
    pos >> dato;
    while(!pos.eof()){
        cout << dato << endl;
        pos >> dato;
    }

    cout << "El archivo de los negativos es: " << endl;
    neg >> dato;
    while(!neg.eof()){
        cout << dato << endl;
        neg >> dato;
    }
  }
}