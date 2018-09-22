#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //Declaramos las variables.
  double lado1, lado2, angulogrados, anguloradianes, area;

  //Obtenemos los datos del usuario y los guardamos en las variables declaradas.
  cout << "Introduce el primer lado:";
  cin >> lado1;
  cout << "Introduce el segundo lado:";
  cin >> lado2;
  cout << "Introduce el ángulo: ";
  cin >> angulogrados;

  //Calculamos el ángulo en radianes.
  anguloradianes = (angulogrados * M_PI) /180;

  //Calculamos el área.
  area = 0.5 * lado1 * lado2 * sin(anguloradianes);

  //Imprime el resultado.
  cout << "El área del triángulo es: " << area;

}
