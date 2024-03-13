#include <iostream>
using namespace std;
int swapValues(int &, int &);
int swapValues(int &, int &, int &);
int swapValues(int &, int &, int &, int &);

int swapValues(int &a, int &b){
  int x=a;
  a=b;
  b=x;
  return a,b;
}
int swapValues(int &a, int &b, int &c){
  int x=a;
  a=b;
  b=c;
  c=x;
  return a,b,c;
}
int swapValues(int &a, int &b, int &c, int &d){
  int x=a;
  int z=b;
  a=d;
  b=c;
  c=z;
  d=x;
  return a,b,c,d;
}
