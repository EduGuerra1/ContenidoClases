#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
  //Se declaran las variables
  int horas = 0, horasExtra = 0;
  float pagoHoras = 0, salarioB = 0, salarioN = 0, salarioHorasExtras = 0, bono = 0, impuestos = 0;

  //Se solicitan las horas trabajadas
  cout << "Ingrese la cantidad de horas trabajadas:\n";
  cin >> horas;
  //Se valida que las horas trabajadas no sean igual a 0
  if (horas > 0 && horas <= 44) {
    //Se solicita el pago por hora de trabajo
    cout << "Ingrese el pago por hora de trabajo\n";
    cin >> pagoHoras;
    //Se valida que el pago por hora no sea menor a 0
    if (pagoHoras <= 0) {
      cout << "El pago por hora no puede ser igual o menor a 0";
      return 0;
    }
    //Se calcula el salario bruto
    salarioB = (horas * pagoHoras) ;
    bono = salarioB * 0.10;
    impuestos = salarioB * 0.15;
    
    salarioN = salarioB -impuestos + bono;
    cout << fixed <<"El salario bruto es de: $" << setprecision(2) << salarioB << "\nEl bono es de: $" << setprecision(2) << bono << "\nEl salario neto es de: $"  << setprecision(2) << salarioN;
  }else if(horas > 44 ){

    //Se solicita el pago por hora de trabajo
    cout << "Ingrese el pago por hora de trabajo\n";
    cin >> pagoHoras;

    if (pagoHoras <= 0) {
      cout << "El pago por hora no puede ser igual o menor a 0";
      return 0;
    }

    horasExtra = horas -44;  
    salarioHorasExtras = horasExtra * pagoHoras;
    horas = horas - horasExtra;  
    salarioB = (horas * pagoHoras) ;

    bono = salarioB * 0.10;
    impuestos = salarioB * 0.15;
    
    salarioN = salarioB -impuestos + bono + horasExtra;
    cout << fixed <<"El salario bruto es de: $" << setprecision(2) << salarioB << "\nEl bono es de: $" << setprecision(2) << bono << "\nEl salario de horas extras es de: $" << setprecision(2) << salarioHorasExtras << "\nEl salario neto es de: $"  << setprecision(2) << salarioN;
  } else {
    cout << "La cantidad de horas trabajadas no pueden ser igual o menor a 0";
    return 0;
  }

  return 0;
}
