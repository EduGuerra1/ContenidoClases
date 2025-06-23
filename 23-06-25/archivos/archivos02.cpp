#include <iostream>
#include <fstream>

using namespace std;

int main(void){

    ifstream archivo("miPrimerArchivo.txt");

    if(!archivo){
        cout << "El archivo no existe";
    }

    archivo.close();
}