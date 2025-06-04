#include <iostream>
using namespace std;

int main() {
  int n;
   

  cout << "Ingrese n: ";
  cin>> n;
 int arr[n] ;
  for (int i = 0; i <= n - 1; i++)
  {
    cout << "\nIngrese el valor numerico para la posicion " << i << ": ";
    cin >> arr[i];
  }

    for (int i = 0; i < n ; i++)
  {
    cout << "\nValor de la posicion " << i << ": "<< arr[i] ;
  }
  
    
  return 0;
}