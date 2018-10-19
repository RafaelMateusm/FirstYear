#include <iostream>

using namespace std;

int main(){

  //Declaramos las variables.
  double notaprimercuatrimestre;
  double notaexamenfinal;
  double notapraticas;
  double actividadadicional;
  double total;

  //Nota del primer cuatrimestre vale 15%.
  cout << "Introduzca la nota del primer examen: ";
  cin >> notaprimercuatrimestre;
  notaprimercuatrimestre = notaprimercuatrimestre * 0.15;
  cout << endl;

  //Nota del examen final vale 50%.
  cout << "Introduzca la nota del examen final:";
  cin >> notaexamenfinal;
  notaexamenfinal = notaexamenfinal * 0.50;
  cout << endl;

  //Nota de prácticas vale 20%.
  cout << "Introduzca la nota de práticas:";
  cin >> notapraticas;
  notapraticas = notapraticas * 0.20;
  cout << endl;

  //Nota de la actividad adicional vale 15%.
  cout << "Introduzca la nota de actividad adicional:";
  cin >> actividadadicional;
  actividadadicional = actividadadicional * 0.15;
  cout << endl;

  //Cálcula la nota total sumando todas las notas.
  total = (notaprimercuatrimestre + notapraticas + notaexamenfinal + actividadadicional);

  //Imprime el resultado final.
  cout << "Su nota es: " << notaprimercuatrimestre << "+" << notapraticas << "+" << notaexamenfinal << "+" << actividadadicional << "=" << total;
  return 0;

}
