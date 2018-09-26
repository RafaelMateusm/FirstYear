#include <iostream>
using namespace std;
int main()
{
	double gf, cl; // declaramos las variables= grados ahrenheit y grados celsius
	cout << "Escribe un grado:"<<endl;
	cin >> gf;
	cl = 5/9.0*(gf-32);
	cout << "en grados celsius seria: "<< cl << endl;
	
	return 0;
}	
	
