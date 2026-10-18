#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    // 1
    int x = 5; // 5 an 100

    // x € [- ∞; -10] an [0; +∞];
    if(x <=-10 || x > 0)
    {
      cout<<"shualedi: " << x<<endl;
     
    }else{
        cout<<"ar aris shualedshi ricxvi: " << x<<endl;
    }

    // 3<= x<=40 an x>100;
    if(x >= 3 && x <= 40)
    {
      cout<<"shualedi: " << x<<endl;
    }else{
        cout<<"ar aris shualedshi ricxvi: " << x<<endl;
    }

    // 2
    bool x1,x2,x3,x4,x5;
    x1 = true;
    x2 = true;
    x3 = true;
    x4 = true;
    x5 = true;

    bool y = !((x1 && !x2) || (x3 && !x4)); 
    bool b = (x1 && !x2) || (x3 && !x5);

    cout<<"Y: "<<y<<endl;
    cout<<"B: "<<b<<endl;
    

    // 3

    int g,f,h;
    // a - min 
    if(g < f && g < h)
    {
      cout<<"Min " << g<<endl;
    }else if( f < g && f < h )
    {
       cout<<"Min " << f<<endl;
    }else{
        cout<<"Min " << h<<endl;
    }
    
    // b - max
    if(g > f && g > h)
    {
      cout<<"Max " << g<<endl;
    }else if( f > g && f > h )
    {
       cout<<"Max " << f<<endl;
    }else{
        cout<<"Max " << h<<endl;
    }

    // c min²( x + y + z / 2, xyz) + 1;
    double sum,namravli;
    double final;
    sum = g + f + h;
    namravli = g*f*h;
    if(sum < namravli)
    {
      final = pow(sum,2) + 1;
      cout<<"Final: " << final<<endl;
    }else{
        final = pow(namravli,2) + 1;
        cout<<"Final: " << final<<endl;
    }

    // 4 (1,3)
    
    int l, i;
    cout<<"Put l: " <<endl;
    cin>>l;
    cout<<"Put i: " <<endl;
    cin>>i;

    if(l > 1 && l < 3)
    {
      cout<<"l: "<<l <<endl;
    }else if(i > 1 && i < 3)
    {
       cout<<"i: "<<i <<endl;
    }else{
        cout<<"arcerti ar aris (1,3) shualedshi :( " <<endl;
    }


    return 0;
}