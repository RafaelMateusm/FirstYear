#include <iostream>

using namespace std;

int main(){
	int tiempo; //El tiempo estará en segundos.
	int horas, minutos;
	cout << "Escribe una cantidad de segundos: " << endl;
	cin >> tiempo;
	
	//Calcula las horas
	horas = tiempo / 3600;
	tiempo = tiempo % 3600;
	//Calcula los minutos
	minutos = tiempo / 60;
	//Calcula los segundos
	tiempo = tiempo % 60;
	
	//Imprime el tiempo que hemos introducido en segundos y lo transforma en horas, minutos y segundos.
	cout << horas << ":" << minutos << ":" << tiempo;
}