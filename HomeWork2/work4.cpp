#include <math.h>
#include <iostream>
using namespace::std;
int main()
{
  double w,a,y,x,e;
  e = 2.718;
  x = 1.97;
  a = 4.5;
  y = (a-pow(e,x))/(pow(sin(x),2) - pow(cos(x),2));
  w = fabs(a-y)/(1+sqrt(a));
  
  cout<<"W = "<<w<<endl;
  cout<< "Y = "<<y<<endl;

  return 0;
}