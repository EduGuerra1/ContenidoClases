#include <iostream>
#include <fstream>

using namespace std;

int main(void){

    ofstream archivo("miPrimerArchivo.txt", ios::app);

    cout << "Hola\n";
    archivo << "Hola\n";

    archivo.close();
}