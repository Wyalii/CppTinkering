#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // 1
    int n = 1;
    while(n <= 10)
    {
      cout<<"Giorgi"<<endl;
      n++;
    }
    
    // 2
    for(int i = 0; i <= 100; i++)
    {
      if(i%2 !=0)
      {
        cout<<i;
      }
    }
    cout<<endl;
    for(int i = 0; i <= 100; i++)
    {
      if(i%2 ==0)
      {
        cout<<i; 
      }
    }

    // 3

    int namravli = 1;
    for(int i = 1; i <=25; namravli*= i, i++);
    cout<<"narmavli: "<<namravli<<endl;

    // 4 
    double y;
    for(double x = 0.5; x <= 1.3; x+=0.1)
    {
        cout<<"Y: "<<endl;
        y = pow(2.71828,x) + pow(3,x) + 2;
        cout<<y<<endl;
        cout<<"X: "<<endl;
        cout<<x<<endl;
    }

    // 5 
    double Y = 0;
    double x,k;
    cout<<"shemoitane x: "<<endl;
    cin>>x;

    while(k <=2.5)
    {
      Y = Y + sin(k*x);  
      k+=0.1;
    }
    cout<<"Y = "<<Y<<endl;
        
    return 0;
}