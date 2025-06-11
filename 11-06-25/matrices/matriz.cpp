#include <iostream>
using namespace std;

int main() {
    
    int mat[50][50];
    int i, j, nFilas, nColumnas, acum;
    int sumas[50];
    cout << "LLENAR UNA MATRIZ DESDE EL TECLADO\n\n";
    cout << "Cuantas filas tendra la matriz?: ";
    cin >> nFilas;
    cout << "Cuantas columnas tendra la matriz?: ";
    cin >> nColumnas;
    
    cout << "Digite los datos de la matriz: \n";
    for ( i = 0; i < nFilas; i++)
    {
        for ( j = 0; j < nColumnas; j++)
        {
            cout << "Celda actual: [" << i << ", " << j << "]: "; 
            cin >> mat[i][j];
        }
        
    }
    cout << "Los datos de la matriz son: \n"; 
    for ( i = 0; i < nFilas; i++)
    {
        for ( j = 0; j < nColumnas; j++)
        {
            cout << mat[i][j] + " ";
        }
        cout << endl;
    }

    for ( i = 0; i < nFilas; i++)
    {
        sumas[i] = 0;
        for ( j = 0; j < nColumnas; j++)
        {
            sumas[i] += mat[i][j] ;
        }
        cout << endl;
    }

    cout << "Las sumas de cada fila son: \n";

for ( i = 0; i < nFilas; i++)
    {
       cout << sumas[i] << endl;
    }
    
    

    
  return 0;
}