#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	//Declaramos las variables
	double rbase, altura, volumencono, volumencilindro;
	
	//Damos valores a las variables
	cout << "Introduce el valor de la base:";
	cin >> rbase;
	cout << "Introduce el valor de la altura:";
	cin >> altura;
	
	//Fórmula para calcular el volumen de un cono
	
	volumencono = (M_PI*pow(rbase,2)*altura)/3;
	
	//Fórmula para calcular el volumen de un cilindro
	
	volumencilindro = (M_PI*(pow(rbase,2))*altura);
	
	//Imprimimos en la pantalla el resultado que en este caso sería el volumen de un cono
	// y el volumen de un cilindro
	cout << endl << "El volumen de un cono es: " << volumencono << endl;
	cout << "El volumen de un cilindro es: " << volumencilindro << endl;
	
	
	return 0;
}