#include <math.h>
#include <iostream>
using namespace::std;
int main()
{
    int x,y,z;
    cout<< "shemoitane x: "<<endl;
    cin>> x;
    cout<< "shemoitane y: "<<endl;
    cin>>y;
    cout<< "shemoitane z: "<<endl;
    cin>>z;
    float a = y + (x / (pow(y,2) + (abs(pow(x,2)/(y + pow(x,3)/3.0)))));
    float b = (1 + pow(tan(3.0/2.0),2));
    cout<< "a =  "<< a<<endl;
    cout<< "b =  "<<b<<endl;
    return 0;
}