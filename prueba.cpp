#include <iostream>

using namespace std;

void compararnumeros(int a, int b, int c) {
  if( a < b && a < c){ //EN CASO DE QUE A SEA EL MAYOR DE TODOS
    if(b < c){
      cout << a << "," << b << "," << c; //EN EL CASO DE QUE B SEA MENOR QUE C
    }else{
      cout << a << "," << c << "," << b; //EN EL CASO DE QUE C SEA MENOR QUE B
    }
  }
  if( b < a && b < c){ //EN EL CASO DE QUE B SEA EL MAYOR DE TODOS
    if(a < c){
      cout << b << "," << a << "," << c; //EN EL CASO DE QUE A SEA MENOR QUE C
    }else{
      cout << b << "," << c << "," << a; //EN EL CASO DE QUE C SEA MENOR QUE A
    }
  }
  if( c < a && c < b){ //EN EL CASO DE QUE C SEA EL MAYOR DE TODOS
    if(b < a){
      cout << c << "," << b << "," << a; //EN EL CASO DE QUE B SEA MENOR QUE A
    }else{
      cout << c << "," << a << "," << b; //EN EL CASO DE QUE A SEA MENOR QUE B
    }
  }
}

int main(){

  //Declaramos las variables
  int a,b,c;


  cout << "Introduce el primer número:";
  cin >> a;
  cout << "Introduce el segundo número:";
  cin >> b;
  cout << "Introduce el tercer número:";
  cin >> c;
  compararnumeros(a,b,c);

}
