#include <iostream>

using namespace std;

int main(){

  //Declaramos las variables.
  double notaprimercuatrimestre, notaexamenfinal, notapracticas, actividadadicional, total, notapractica1, notapractica2;

  //Nota del primer cuatrimestre vale 15%.
  cout << "Introduzca la nota del primer examen: ";
  cin >> notaprimercuatrimestre;
  notaprimercuatrimestre = notaprimercuatrimestre * 0.15;
  cout << endl;

  //Nota del examen final vale 50%.
  cout << "Introduzca la nota del examen final:";
  cin >> notaexamenfinal;
  if(notaexamenfinal > 3.99){
  notaexamenfinal = notaexamenfinal * 0.50;
  }else{
  notaexamenfinal = 0;
  }
  cout << endl;

  //Nota de prácticas vale 20%, y hay que tener mínimo un 5 en ellas para poder aprobar
  cout << "Introduzca la nota de prática 1:";
  cin >> notapractica1;
  cout << "Introduzca la nota de práctica 2:";
  cin >> notapractica2;
  if(notapractica1 < 5 || notapractica2 < 5){
    notapracticas = 0;
  }else{
    notapracticas = (notapractica1 + notapractica2)/2;
      notapracticas = notapracticas * 0.20;
  }
  cout << endl;

  //Nota de la actividad adicional vale 15%.
  cout << "Introduzca la nota de actividad adicional:";
  cin >> actividadadicional;
  actividadadicional = actividadadicional * 0.15;
  cout << endl;

  //Cálcula la nota total sumando todas las notas.
  total = (notaprimercuatrimestre + notapracticas + notaexamenfinal + actividadadicional);

  //Imprime el resultado final.

  cout << "Su nota es: " << notaprimercuatrimestre << "+" << notapracticas << "+" << notaexamenfinal << "+" << actividadadicional << "=" << total;
  return 0;

}
