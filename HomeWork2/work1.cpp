#include <iostream>
using namespace::std;
int main()
{
    //1kg = 1000g
    int kg,g, mod;
    cout<<"daweret grami: "<< endl;
    cin>>g;
    kg = g/1000;
    mod = g%1000;
    cout<<kg<<"kg, "<<mod<<"g"<<endl;
    
  return 0;
}