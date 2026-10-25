#include <iostream>
using namespace std;
int main()
{
  // 1
  char userColor;
  cout<<"shemoitane feri: "<<endl;
  cin>>userColor;
  switch(userColor)
  {
    case 'r':
     cout<< "Red"<<endl;
    break;

    case 'g':
     cout<< "Green"<<endl;    
    break;

    case 'y':
    cout<< "Yellow"<<endl;
    break;

    case 'p':
    cout<< "Pink"<<endl;
    break;
  }

  // 2
  char userOperation;
  cout<<"shemoitane operacia: "<<endl;
  cin>>userOperation;
  switch(userOperation)
  {
    case '+':
     cout<< "mimateba"<<endl;
    break;

    case '-':
     cout<< "gamokleba"<<endl;    
    break;

    case '*':
    cout<< "gamravleba"<<endl;
    break;

    case '/':
    cout<< "gayofa"<<endl;
    break;
    default:
    cout<< "this is not an operation"<<endl; 
    break;
  }
  // 3 

  char userSymbol;
  cout<<"shemoitane aso: "<<endl;
  cin>>userSymbol;
  switch(userSymbol)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<< "xmovani: "<<userSymbol<<endl;
    break;
    default:
    cout<< "tanxmovani; "<<userSymbol<<endl; 
    break;
  }
  // 4
  cout<<"shemoitane cifri: "<<endl;
  int userNumber;
  cin>>userNumber;
  switch(userNumber)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 'u':
    cout<< "the number is less than 5 "<<userNumber<<endl;
    break;
    case 5:
    cout<< "the number equal to 5 "<<userNumber<<endl;
    break;
    default:
    cout<< "the number is greater than 5 "<<userNumber<<endl; 
    break;
  }
}