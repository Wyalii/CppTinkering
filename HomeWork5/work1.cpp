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


    // arrays

    // 1
    
    int C[12];
    cout<< "sheavse masivi: "<<endl;
    for(int i = 0; i <12; i++)
    {
      cin>>C[i]; 
    }
    
    int DN = 0;
    int UN = 0;
    int ON = 0;
    for(int i = 0; i <12;i++)
    {
        if(C[i] == 0)
        {
          ON++;
        }
        if(C[i] > 0)
        {
          DN++;
        }
        if(C[i] < 0)
        {
          UN++;
        }
    }
    cout<<"DN: "<<DN<<endl;
    cout<<"UN: "<<UN<<endl;
    cout<<"ON: "<<ON<<endl;


    // 2
    int B[10];
    int min;
    cout<< "sheavse masivi: "<<endl;
    for(int i = 0; i <10; i++)
    {
      cin>>B[i]; 
    }
    min = B[0];
    for(int i = 0; i < 10; i++)
    {
       if(B[i]<min)
       {
          min = B[i];
       }
       
    }
    cout<<"min: "<<min<<endl;

    // 3
    int B2[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
    ,21,22,23,24,25};
    int luwiJami = 0;
    long int kentiNamravli = 1;

    for(int i = 0; i < 25; i++)
    {
      if(i%2 == 0)
      {
        luwiJami += B2[i]; 
      }
      if(i%2 != 0)
      {
        kentiNamravli *= B2[i];
      }
    }
    cout<<"luwebis jami: "<<luwiJami<<endl;
    cout<<"kentebis narmvali: "<<kentiNamravli<<endl;

    //  4

    int A[15] = {1,2,3,4,5,6,7,8,9,-1,11,12,13,14,15};
    int max = A[0];
    for(int i = 0; i < 15; i++)
    {
      if(A[i] > max)
      {
         max = A[i];
      }
    }

    cout<<"max: "<<max<<endl;

        
    return 0;
}