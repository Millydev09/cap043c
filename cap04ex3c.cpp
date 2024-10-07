//cap04ex3c.cpp

#include <iostream>
using namespace std;

int main (void){
  float md,n1,n2,n3,n4;
  cout << "entre com os valor de n1" << endl;
  cin >>  n1;
  cout << "entre com os valores de n2" << endl;
  cin >> n2;
  cout << "entre com os valores de n3:" << endl;
  cin >> n3;
  cout << "entre com os valores de n4:" << endl;
  cin >> n4;

  md = (n1+ n2+n3+n4)/4;
  if (md >= 5){
   cout << "parabens aprovado!sua nota foi:" << md;
  }
  else {
   cout << "reprovado sua  nota foi insuficiente:" << md;
   }
  return 0;
}
