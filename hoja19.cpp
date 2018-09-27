#include <iostream>

using namespace std;

int main(){
  //Declaramos las variables.
  int numero1 = 1;
  int numero2;
  char operador[3];

  cout << "Puede efectuar suma, resta, multiplicación o división entre dos números reales." << endl;
  cout << "Para salir escriba un cero." << endl;

  /*El programa pide al usuario el primer número en caso de que este número sea cero,
  el programa se termina. He empleado el while para que al detectar el 0, el programa
  se termine.*/
while(numero1 != 0){
  cin >> numero1;
  if(numero1 == 0){
    cout << "Fin del programa.";
    break;
  }

  //Obtiene el operador que se va a utilizar.
  cin >> operador[0];

  //Obtiene el segundo número.
  cin >> numero2;


  if(numero1 == 0){
    cout << "FIN.";
  }else{
  switch (operador[0]) {
    //Si el operador introducido es un "+", el programa sumará el número1 y el número 2.
    case '+':cout << numero1 << operador[0] << numero2 << " = " << numero1 + numero2 << endl;
            break;
    //Si el operador introducido es un "-", el programa restará el número 1 y el número 2.
    case '-':cout << numero1 << operador[0] << numero2 << " = " << numero1 - numero2 << endl;
            break;
    //Si el operador introducido es "*", el programa multiplicará el número 1 y el número 2.
    case '*':cout << numero1 << operador[0] << numero2 << " = " << numero1 * numero2 << endl;
            break;
    //Si el operador introducido es "/", el programa divide el primer número y el segundo número.
    case '/':cout << numero1 << operador[0] << numero2 << " = " << numero1 / numero2 << endl;
            break;
    case ' ': break;
  }
}
}
}
