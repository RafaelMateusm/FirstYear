#include <iostream>

using namespace std;

 int main() {
   //Declaramos las variables.
  int unidades;
  char descuento;
  string nombrecliente, NIF, direccion, nombreproducto;
  double total, descuentonumerico, IVA, precio;

  //El usuario introduce los valores para cada cosa
  cout << "Precio del producto: ";
  cin >> precio;
  cout << "Unidades: ";
  cin >> unidades;
  cout << "Descuento(s/n):";
  cin >> descuento;
  cout << "Nombre del cliente: " << endl;
  cin.ignore();
  getline(cin,nombrecliente);
  cout << "NIF del cliente: ";
  getline(cin,NIF);
  cout << "Dirección: ";
  getline(cin,direccion);
  cout << "Nombre del producto: ";
  getline(cin,nombreproducto);

  total = unidades * precio;
  if(descuento == 's'){
  descuentonumerico = total * 0.15;
}
  IVA = (total - descuentonumerico)*0.21;
  cout << "FACTURA: " << endl;
  cout << "\n  \t \t \t \t \t \t" << nombrecliente;
  cout << "\n  \t \t \t \t \t \t" << direccion;
  cout << "\n  \t \t \t \t \t \t" << NIF;
  cout << "\n" << "PRODUCTO: " << nombreproducto;
  cout << "\n" << "PRECIO UNITARIO: " << "\n \t \t \t \t \t \t" << precio;
  cout << "\n" << "UNIDADES: " << "\n \t \t \t \t \t \t" << unidades;
  cout << "\n" << "TOTAL: " << "\n \t \t \t \t \t \t" << total;
  cout << "\n" << "DESCUENTO: " << "\n \t \t \t \t \t \t" << descuentonumerico;
  cout << "\n" << "TOTAL TRÁS DESCUENTO: " << "\n \t \t \t \t \t \t" << (total - descuentonumerico);
  cout << "\n" << "IVA APLICADO: " << "\n \t \t \t \t \t \t" << IVA;
  cout << "\n" << "PRECIO FINAL: " << "\n \t \t \t \t \t \t" << (total - descuentonumerico + IVA);

  return 0;
}
