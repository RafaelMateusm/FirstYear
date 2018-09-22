#include <iostream>
#include <string>
#include <stdlib.h>

using  namespace std;

int main(){
  string a;
  string  b;
  string  c;
  
  cin >> a;
  cin >> b;
  cin >> c;

  cout <<  a << endl;

  if( a.length() < b.length() && a.length() < c.length()){
    if(b.length() < c.length()){
      cout << a << "," << b << "," << c;
    }else{
      cout << a << "," << c << "," << b;
    }
  }
  if( b.length() < a.length() && b.length() < c.length()){
    if(a.length() < c.length()){
      cout << b << "," << a << "," << c;
    }else{
      cout << b << "," << c << "," << a;
    }
  }
  if( c.length() < a.length() && c.length() < b.length()){
    if(b.length() < a.length()){
      cout << c << "," << b << "," << a;
    }else{
      cout << c << "," << a << "," << b;
    }
  }
  return 0;
}
