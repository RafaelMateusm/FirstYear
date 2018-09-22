#include <iostream>

using namespace std;

int main(){
  int tiempo,horas,segundos,minutos;

  cout << "Introduce el tiempo:";
  cin >> tiempo;

  horas = tiempo/3600;
  tiempo = tiempo%3600;
  minutos = tiempo/60;
  tiempo = tiempo%60;

  segundos = tiempo;

  cout << horas << ":" << minutos << ":" << segundos;
}
