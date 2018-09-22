#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Introduce un número(entre 1 y 100): ";
  cin >> numero;
  if(numero <= 100 && numero >= 1){
    for(int i = 0; i < 11; i++){
      cout << numero << " x " << i << " = " << numero*i << endl;
    }
  }
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
