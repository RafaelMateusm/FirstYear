#include <iostream>

using namespace std;

int main(){
  int a = 1;
  double d = 1.0;

  a = 46 % 9 + 4 * 4 - 2;
  cout << a << endl;
  a = 1;
  a = 45 + 43 % 5 * (23 * 3 % 2);
  cout << a << endl;
  a = 1;
  a = 45 + 45 * 50 % a--;
  cout << a << endl;
  d = 1.5 * 3 + (++d);
  cout << d << endl;
  d = 1;
  d = 1.5 * 3 + d++;
  cout << d << endl;
  a = 1;
  a %= 3 / a + 3;
  cout << a << endl;
  return 0;

}
