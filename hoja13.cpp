#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	//Declaramos las variables que son n�meros enteros.
  int a;
  int b;
  int c;
	//El usuario introduce los valores de cada n�mero
  cout << "Introduce el primer n�mero: ";
  cin >> a;
  cout << "Introduce el segundo n�mero: ";
  cin >> b;
  cout << "Introduce el tercer n�mero: ";
  cin >> c;

  //Comparamos los valores de cada n�mero para imprimir los n�meros de menor a mayor

  if( a < b && a < c){ //EN CASO DE QUE A SEA EL MAYOR DE TODOS
    if(b < c){
      cout << a << "," << b << "," << c;
    }else{
      cout << a << "," << c << "," << b;
    }
  }
  if( b < a && b < c){ //EN EL CASO DE QUE B SEA EL MAYOR DE TODOS
    if(a < c){
      cout << b << "," << a << "," << c;
    }else{
      cout << b << "," << c << "," << a;
    }
  }
  if( c < a && c < b){ //EN EL CASO DE QUE C SEA EL MAYOR DE TODOS
    if(b < a){
      cout << c << "," << b << "," << a;
    }else{
      cout << c << "," << a << "," << b;
    }
  }
  return 0;
}
