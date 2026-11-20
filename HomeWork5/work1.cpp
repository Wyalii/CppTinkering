#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // 1
    for(int i = 1; i <=10; i++)
    {
      cout<<"Giorgi Gigauri"<<endl;
    }

    // 2
    cout<<"kentebi"<<endl;
    for(int i = 1; i <= 100;i++)
    {
      if(i%2 != 0)
      {
        cout<<i<<endl;
      }
    }
    cout<<endl;
    cout<<"luwebi"<<endl;
     for(int i = 1; i <= 100;i++)
    {
      if(i%2 == 0)
      {
        cout<<i<<endl;
      }
    }

    // 3
    int namravli = 1;
    for(int i = 1; i <=25; i++)
    namravli *=i;
    cout<<"namravli: "<<namravli<<endl;

    // 4
    float h = 0.1;
    float x = 0.5;
    double y;
    double e  = 2.71828;
    while(x <1.4)
    {
      y = pow(e,x) + pow(3,x) + 2;
      cout<< "X - "<<x<< " ";
      cout<<"Y - "<<y<<" "<<endl;
      
      x = x+h;
    }

    //5
    cout<<"shemoitane namdvili x ricxvi: "<<endl;
    double x2;
    cin>>x2;
    float h2 = 0.1;

    while(h2 < 2.5)
    {
      double y = sin(h2*x2);
      cout<< "h - "<<h2<<" ";
      cout<<"y - "<<y<<endl;
      h2 = h2 + 0.1;
    }

    for(int i = 1; i<=70;i++)
    {
      if(i%7 == 0)
      {
        continue;
      }
      cout<<i<<" ";
    }

    cout<<endl;
    double sum = 0;
    double realNumb;
    cout<<"shemoitane namdvili ricxvebi:"<<endl;
    while(true)
    {
      cin>>realNumb;
      if(realNumb == 6.6)
      {
        break;
      }
      sum += realNumb;
    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}