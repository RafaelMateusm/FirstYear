#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int numeros[5];
  int i = 0;
  int veces = 0;
  do {
    cout << "Introduce un número:";
    i++;
    veces++;
    cin >> numeros[i];
    // Era pra comprobar el signo de cada número, 0 si es positivo y 1 si es negativo. cout << signbit(numeros[i]) << endl;
    // Era pra comrpobar que de verdad guardaba los valores cout << numeros[i] << endl;
  } while(numeros[i] != 0);

  for(int a = 1; a < veces; a++){
    cout << endl << "El número es el: " << numeros[a];
    if(signbit(numeros[a]) == 0){

    if((numeros[a] % 2) == 0){
      cout << ", es un número par" << endl;
    }else{
      cout << ", es un número impar" << endl;
    }
  }else{
    cout << endl;
  }


  }
}
