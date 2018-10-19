#include <iostream>
#include <string>
#include <stdlib.h>

using  namespace std;

int main(){
	/*Este programa tiene como finalidad comparar la longitud de cada cadena y ordenar las cadenas de menor a mayor longitud.*/


	//Declaramos las variables.
  string a;
  string  b;
  string  c;
	
  //Obtenemos los datos introducidos por el usuario.
  cout << "Introduzca la primera cadena:";
  cin >> a;
  cout << "Introduzca la segunda cadena:";
  cin >> b;
  cout << "Introduzca la tercera cadena:";
  cin >> c;

  //Comparamos la longitud de cada cadena para imprimir en pantalla las cadenas de menor a mayor orden.
  if( a.length() < b.length() && a.length() < c.length()){
    if(b.length() < c.length()){
      cout << a << "," << b << "," << c;
    }else{
      cout << a << "," << c << "," << b;
    }
  }
  if( b.length() < a.length() && b.length() < c.length()){
    if(a.length() < c.length()){
      cout << b << "," << a << "," << c;
    }else{
      cout << b << "," << c << "," << a;
    }
  }
  if( c.length() < a.length() && c.length() < b.length()){
    if(b.length() < a.length()){
      cout << c << "," << b << "," << a;
    }else{
      cout << c << "," << a << "," << b;
    }
  }
  return 0;
}
