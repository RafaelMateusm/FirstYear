#include <iostream>

using namespace std;

int main(){

    //Declaramos las variables que vamos a utilizar en el programa.
    double sueldobase, complementoddestino, complementocargoacademico, horasextra, hijos, mayoresdependientes,total,sueldobruto,impuestos;
    //Los valores que el usuario teclea se guardan en las variables.
    cout << "Sueldo Base:";
    cin >> sueldobase;
    cout << "Complemento de destino:";
    cin >> complementoddestino;
    cout << "Complemento de cargo académico: ";
    cin >> complementocargoacademico;
    cout << "Horas extra:";
    cin >> horasextra;

    //Calcula el sueldo bruto.
    sueldobruto = sueldobase + complementoddestino + complementocargoacademico + (23*horasextra);
    cout << sueldobruto;

    //Calcula el impuesto mediante el número de hijos y número de mayores dependientes.
    cout << "¿Tiene hijos? Responda con número de hijos, en caso de no tener 0";
    cin >> hijos;
    cout << "¿Tiene mayores dependientes? Responda con número";
    cin >> mayoresdependientes;

    //Comprobar que el impuesto es el correcto.
    cout << ((24 - (2*hijos) - mayoresdependientes)/100) << endl;

    //Calcular el impuesto
    impuestos = sueldobruto*((24 - (2*hijos) - mayoresdependientes)/100);

    //El sueldo neto.
    total = sueldobruto - impuestos;

    //Imprime en pantalla el sueldoneto.
    cout << "Sueldo base:" << sueldobase << endl;
    cout << "Complemento de destino: " << complementoddestino << endl;
    cout << "Complemento de cargo académico: " << complementocargoacademico << endl;
    cout << "Horas extras realizadas: " << horasextra << endl;
    cout << "Hijos: " << hijos << endl;
    cout << "Mayores: " << mayoresdependientes << endl;
    cout << "Sueldo bruto: " << sueldobruto << endl;
    cout << "Porcentaje de IRPF: " << ((24 - (2*hijos) - mayoresdependientes))<< "%" << endl;
    cout << "Retención por IRPF: " << impuestos << endl;
    cout << "Sueldo neto: " << total << endl;
}
