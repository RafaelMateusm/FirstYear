#include <iostream>
#include <cmath>
using namespace std;

  double lado1, lado2, angulogrados, anguloradianes, area;

  int pedirdatos(){   //Obtenemos los datos del usuario y los guardamos en las variables declaradas.
    cout << "Introduce el primer lado:";
    cin >> lado1;
    cout << "Introduce el segundo lado:";
    cin >> lado2;
    cout << "Introduce el ángulo: ";
    cin >> angulogrados;
    return 0;
  }
  int calcularangulo(){
      anguloradianes = (angulogrados * M_PI) /180;
      return 0;
  }
  int calculararea(){
      area = 0.5 * lado1 * lado2 * sin(anguloradianes);
      return 0;
  }
int main() {
  //Obtenemos los datos del usuario y los guardamos en las variables declaradas.
  pedirdatos();
  //Calculamos el ángulo en radianes.
  cout << lado1;
  calcularangulo();
  //Calculamos el área.
  calculararea();
  //Imprime el resultado.
  cout << "El área del triángulo es: " << area;

}
