#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double x;
  double y;
  double total;
  cin >> x;
  cin >> y;
  total = sqrt((pow(1.531, x + y) + ((abs(exp(x)-exp(y)))*(sin(x) - tan(y))/(log10(y)*pow(3.141592,x)))));
  cout << (pow(1.531, x + y) + ((abs(exp(x)-exp(y))))) << endl;
  cout << (sin(x) - tan(y))/(log10(y)) << endl;
  cout << pow(3.141592,x) << endl;


  cout << total;

}
