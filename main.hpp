#include <iostream>
using namespace std;
void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

void swapValues(int &a, int &b){
  int x=a;
  a=b;
  b=x;
}
void swapValues(int &a, int &b, int &c){
  int x=a;
  a=b;
  b=c;
  c=x;
}
void swapValues(int &a, int &b, int &c, int &d){
  int x=a;
  int z=b;
  a=d;
  b=c;
  c=z;
  d=x;
}
