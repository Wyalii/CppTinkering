#include <iostream>
#include <cmath>
using namespace std;
int main()
{
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
    cout<<endl;

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
    cout<<endl;


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
    cout<<endl;


    // 5
    int matrix1Sum;
    int matrix1 [4][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}
    };

    for(int i = 0; i < 4;i++)
    {
        for(int j = 0; j < 4; j++)
        {
            matrix1Sum+= matrix1[i][j];
        }
    }

    cout<<"Matrix sum: "<<matrix1Sum<<endl;
    cout<<endl;


    // 6
    int posMatix2Elements,negMatrix2Elements,Matrix2[3][4];
    posMatix2Elements = 0;
    negMatrix2Elements = 0;
    cout<<"sheavse masivis elementebi (3x4): "<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<endl;
        cout<<"striqoni: "<<i<<endl;
        for(int j = 0; j <4; j++){
           cout<<"sveti: "<<j<<endl;
           cin>>Matrix2[i][j];
           if(Matrix2[i][j] > 0)
           {
             posMatix2Elements++;
           }else if(Matrix2[i][j] < 0){
            negMatrix2Elements++;
           }
        }
    }
    cout<<"poizituri elmentebis raodenoba: "<<posMatix2Elements<<endl;
    cout<<endl;
    cout<<"negatiuri elementebis raodenoba: "<<negMatrix2Elements<<endl;
    cout<<endl;
    

     for(int i = 0; i < 3;i++)
     {
        cout<<endl;  
        for(int j = 0; j < 4; j++)
        {
           cout<<Matrix2[i][j]<<" ";    
        }
    }
    cout<<endl;


    // 7

    int svetebisJami, Matrix3[6][7];
    svetebisJami = 0;
    cout<<"sheavse masivis elementebi (6x7): "<<endl;
    for(int i = 0; i < 6; i++)
    {
        cout<<endl;
        cout<<"striqoni: "<<i<<endl;
        for(int j = 0; j < 7; j++){
           cout<<"sveti: "<<j<<endl;
           cin>>Matrix3[i][j];
           
        }
    }
    cout<<endl;
    cout<<"Matrica 3 : "<<endl;
    cout<<endl;
     for(int i = 0; i < 6;i++)
     {
        cout<<endl;  
        for(int j = 0; j < 7; j++)
        {
           cout<<Matrix3[i][j]<<" ";    
        }
    }

    cout<<endl;

    for(int i = 0; i < 7; i++)
    {
        cout<<endl;
        cout<<"striqoni: "<<i<<endl;
        for(int j = 0; j < 6; j++){
           svetebisJami+= Matrix3[j][i];
        }
    }
    
    cout<<endl;
    cout<<"mesame matricis yvela svetis elementebis jamia: "<<svetebisJami<<endl;
    cout<<endl;
    // momewona es davaleba <3

    // 8
    int posB[25],negC[25],A2[5][5],negCounter,posCounter;
    negCounter = 0;
    posCounter = 0;
    cout<<"sheavse masivis elementebi (5x5): "<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<endl;
        cout<<"striqoni: "<<i<<endl;
        for(int j = 0; j < 5; j++){
           cout<<"sveti: "<<j<<endl;
           cin>>A2[i][j];
           if(A2[i][j]>0)
           {
             negC[negCounter] = A2[i][j];
             negCounter++;
           }else if(A2[i][j] < 0)
           {
             posB[posCounter] = A2[i][j];
             posCounter++;
           }
           
        }
    }
    cout<<endl;
    cout<<"masivi B(dadebitebi): "<<endl;
    for(int i = 0; i < posCounter; i++)
    {
      cout<<posB[i]<<endl;
    }
    cout<<endl;
    cout<<"masivi C(uaryofitebi): "<<endl;
    for(int i = 0; i < negCounter; i++)
    {
      cout<<negC[i]<<endl;
    }

}