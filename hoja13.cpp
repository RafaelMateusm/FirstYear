#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	//Declaramos las variables que son números enteros.
  int a;
  int b;
  int c;
	//El usuario introduce los valores de cada número
  cout << "Introduce el primer número: ";
  cin >> a;
  cout << "Introduce el segundo número: ";
  cin >> b;
  cout << "Introduce el tercer número: ";
  cin >> c;

  //Comparamos los valores de cada número para imprimir los números de menor a mayor

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
