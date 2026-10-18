#include <iostream>
#include <math.h>
using namespace::std;
int main()
{
    double x,y,z;
    double pi = 3.14;
    cout<< "shemoitane x :"<<endl;
    cin>>x;
    cout<< "shemoitane y :"<<endl;
    cin>>y;
    cout<< "shemoitane z :"<<endl;
    cin>>z;
    double a = (2*cos(x- pi/6)) /(1.0/2.0) + pow(sin(y),2);
    double b = 1 + (pow(z,2) / 3 + pow(z,2)/5);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}