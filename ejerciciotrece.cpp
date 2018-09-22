#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a;
  int b;
  int c;

  cin >> a;
  cin >> b;
  cin >> c;

  if( a < b && a < c){
    if(b < c){
      cout << a << "," << b << "," << c;
    }else{
      cout << a << "," << c << "," << b;
    }
  }
  if( b < a && b < c){
    if(a < c){
      cout << b << "," << a << "," << c;
    }else{
      cout << b << "," << c << "," << a;
    }
  }
  if( c < a && c < b){
    if(b < a){
      cout << c << "," << b << "," << a;
    }else{
      cout << c << "," << a << "," << b;
    }
  }
  return 0;
}
