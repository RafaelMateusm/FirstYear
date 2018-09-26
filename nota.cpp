#include <iostream>
using namespace std;
int main()
{
	double examen, practica, ac_adicional;
	double not_final;
	cout << "Escribe las notas de tu examen, practica y actividad adicional" << endl;
	cin >> examen;
	cin >> practica;
	cin >> ac_adicional;
	not_final = (examen*0.8)+(practica*0.1)+(ac_adicional*0.1);
	cout << "tu nota final es: "<<  not_final << endl;
	
	return 0;
}