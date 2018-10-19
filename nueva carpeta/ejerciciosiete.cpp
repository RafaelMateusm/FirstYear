#include <iostream>

using namespace std;

int main(){
  //Declaramos las variables
  int x = 12;
  double sigma = 2.1836;
  int y = 3;
  double lambda = 1.11695;
  double alfa = 328.67;
  double f;

  //Calculamos f.
  f = (3*((x+(sigma*y))/((x*x) -(y*y)))) - (lambda * (alfa-13.7));

  //Imprimimos el resultado en pantalla.
  cout << "Valor x:" << x << endl << "Valor sigma:" << sigma << endl << "Valor y:" << y << endl << "Valor lambda:" << lambda << endl << "Valor alfa:" << alfa << endl << "Valor f:" << f << endl;

}
