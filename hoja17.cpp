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
  cin >> numero;
  if(numero == 0){
    break;
  }
  cin >> letra;
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
} while(numero != 0);
  cout << "FIN";
}
