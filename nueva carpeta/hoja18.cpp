#include <iostream>

using namespace std;

int main() {
  //Declaramos las variables.
  int numero;

  //El usuario introduce un número entre 1 y 100.
  cout << "Introduce un número(entre 1 y 100): ";
  cin >> numero;

  //Si el número es menor que 100 y mayor que 1, el programa imprimirá la tabla de multiplicar
  // de dicho número.
  if(numero <= 100 && numero >= 1){
    for(int i = 0; i < 11; i++){
      cout << numero << " x " << i << " = " << numero*i << endl;
    }
  }
  //En el caso de que el número sea mayor que 100 o menor que 1, el programa volverá a pedir otro número.
    while(numero > 100 || numero < 1){
      cout << "No es válido, vuelva a introducir otro número: ";
      cin >> numero;
      if(numero <= 100 && numero >= 1){
        for(int i = 0; i < 11; i++){
          cout << numero << " x " << i << " = " << numero*i << endl;
        }
      }
    }

  cout << "FIN.";
}
