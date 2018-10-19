#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/*Este programa pide números al usuario y dice si son pares/impares (en caso de que sean positivos) e ignora si son negativos*/
	//Declaramos las variables, he empleado un Array ya que el usuario va a introducir varios valores que se deben guardar y así evito el uso de variables.
  int numeros[5];
  int i = 0;
  int veces = 0;

  do {
    cout << "Introduce un número:";
    i++;
    veces++; //He empleado este veces para que en el bucle for sepa hasta cuando debe imprimir valores en la pantalla.
    cin >> numeros[i];
  } while(numeros[i] != 0);

  //Imprime SOLO los números positivos y dice si son pares o impares, en caso de que los números sean negativos los ignora.
  for(int a = 1; a < veces; a++){
    cout << endl << "El número es el: " << numeros[a];
    if(signbit(numeros[a]) == 0){ //Esto le indica al if que el número es positivo, ya que un número positivo es un 0 y un negativo es un 1.

    if((numeros[a] % 2) == 0){ //En caso de que el resto de la divisón sea 0, indica que el número es par, y en caso contrario impar.
      cout << ", es un número par" << endl;
    }else{
      cout << ", es un número impar" << endl;
    }
  }else{ //En caso de ser negativo no los imprime.
    cout << endl;
  }


  }
}
