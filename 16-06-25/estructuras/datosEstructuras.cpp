#include <iostream>
using namespace std;

struct coordenadas {
  int coordenadaX;
  int coordenadaY;
};

struct temp {
  float temperatura;
  coordenadas cord;
};

int main() {
  // Declaracion de variables
  temp arr[100];
  int n = 0;
  float temperaturaPromedio = 0, suma = 0;
  temp mayor, menor;
  cout << "MEDICION DE TEMPERATURAS\n";
  //Se solicita la longitud del array
  cout << "Cuantos datos de temperatura seran?\n";
  cin >> n;

  cout << "Digite las " << n << " temperaturas: \n";
  for (int i = 0; i < n; i++)
  {
    //Se solicitan los datos
    cout << "Temperatura: ";
    cin >> arr[i].temperatura;
    cout << "Coordenada en X: ";
    cin >> arr[i].cord.coordenadaX;
    cout << "Coordenada en Y: ";
    cin >> arr[i].cord.coordenadaY;
  }
    //Se suman todos los datos de temperatura
  for (int i = 0; i < n; i++)
  {
    suma += arr[i].temperatura;

  }
  //Se calcula la temperatura promedio 
  temperaturaPromedio = suma / n;
    //Se muestra el resultado
  cout << "La temperatura promedio es de: " << temperaturaPromedio << "\n";
    

    //Se asignan los valores a la mayor y menor temperatura
    mayor = arr[0];
    menor = arr[0];
    for (int i = 0; i < n; i++)
    {
        //Se recorren todos los datos para comparar las temperaturas
        if (arr[i].temperatura > mayor.temperatura)
        {
            mayor = arr[i];
        }
        
        if (arr[i].temperatura < menor.temperatura)
        {
            menor = arr[i];
        }
        
    }
    //Se muestra la mayor y menor temperatura
    cout << "\nLa mayor temperatura es: " << mayor.temperatura ;
    cout << " y se encuentra en: (" << mayor.cord.coordenadaX << ", " << mayor.cord.coordenadaY << ") " << endl << endl;
    cout << "La menor temperatura es: " << menor.temperatura ;
    cout << " y se encuentra en: (" << menor.cord.coordenadaX << ", " << menor.cord.coordenadaY << ") " << endl ;

  return 0;
}
