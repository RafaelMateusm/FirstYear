#include <iostream>

using namespace std;

int main(){
  int numero1 = 1;
  int numero2;
  char operador[3];
  cout << "Puede efectuar suma, resta, multiplicación o división entre dos números reales." << endl;
  cout << "Para salir escriba un cero." << endl;
while(numero1 != 0){
  cin >> numero1;
  if(numero1 == 0){
    cout << "Fin del programa.";
    break;
  }
  cin >> operador[0];
  cin >> numero2;
  if(numero1 == 0){
    cout << "FIN.";
  }else{
  switch (operador[0]) {
    case '+':cout << numero1 << operador[0] << numero2 << " = " << numero1 + numero2 << endl;
            break;
    case '-':cout << numero1 << operador[0] << numero2 << " = " << numero1 - numero2 << endl;
            break;
    case '*':cout << numero1 << operador[0] << numero2 << " = " << numero1 * numero2 << endl;
            break;
    case '/':cout << numero1 << operador[0] << numero2 << " = " << numero1 / numero2 << endl;
            break;
    case ' ': break;
  }
}

}
}
