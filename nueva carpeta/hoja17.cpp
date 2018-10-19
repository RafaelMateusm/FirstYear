#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//Declaramos las variables.
  string letra = "";
  double numero;
  const double centimetros = 2.54;
  const double metros = 1609.34;
  const double litros = 3.78541;
  const double gramos = 28.3495;
  const double kilogramos = 0.453592;
  cout << "Introduce un número y después la medida: ";

do{
	cout << "Introduce un número y la medida: (12 p)";

  //El usuario introduce el número.
  cin >> numero;

  //Si el número es 0, programa se termina.
  if(numero == 0){
    break;
  }
  //EL usuario introduce la letra.
  cin >> letra;

  //Dependiendo de la medida introducida por el usuario, se convierte a la medida predefinida.
  if(letra == "p"){
    cout << numero << " p" << " son " << (numero * centimetros) << " cm" << endl;
  }
  if(letra == "m"){
    cout << numero << " m" << " son " << (numero * metros) << " m" << endl;
  }
  if(letra == "f"){
    cout << numero << " F" << " son " << ((numero - 32)/1.8) << " c" << endl;
  }
  if(letra == "g"){
    cout << numero << " g" << " son " << (numero * litros) << " l" << endl;
  }
  if(letra == "o"){
    cout << numero << " o" << " son " << (numero * gramos) << " gr" << endl;
  }
  if(letra == "l"){
    cout << numero << " l" << " son " << (numero * kilogramos) << " kg" << endl;
  }
} while(numero != 0); //En el caso de que el usuario introduzca un 0, el programa se termina.
  cout << "FIN";
}
