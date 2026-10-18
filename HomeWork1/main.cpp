#include <iostream>
using namespace std;
int main(){
 // კარტოფილის მომზადების ალგორითმი   

 // დაწყება
 // მონაცემების Სეტანა: კარტოფილი, გაზი, ზეთი

 // კარტოფილის გათლა და დაჭრა ვერტიკალურ ნაწილებად
 // გაზის ჩართვა, ტაფის ჩართულ გაზზე დადება, 2 კოვზი ზეთის ტაფასე დასხმა
 // 2 წუთის შემდეგ კარტოფილის მოთავსება ტაფაზე და შეწვა 8 წუთის განმავლობაში   
 // გაზის გამორთვა და კარტოფილის გადმოღება

 // შემწვარი კარტოფილის დაბრუნება
 // დასასრული

  int a,b,sum,r,R;
  double s;
  const double PI = 3.14159265358979323846;
  // s = pi*(R^2 - r^2)
  R = 21;
  r = 20;
  s =   PI *((R*R) - (r*r));
  cout<< "Fartobi: "<<s<<endl; 
  cout << "shemoitane a: "<< endl;
  cin>>a;
  cout << "shemoitane b: "<< endl;
  cin>>b;
  sum = a + b;
  cout<<"jami: "<<sum<<endl;
  int a1 = 2;
  int a2,a3,a4;
  a1 = a1*a1; // 4 (a^2)
  a2 = a1*a1; // 16 (a^4)
  a3 = a2*a2;// 256 (a^8)
  a4 = a3*a1; // 1024 (a^10)
  cout << "otxi operaciit 2^10: "<< a4<<endl;

  int c = 2;
  int c1,c2,c5,c8,c13;
  c1 = c*c; // 4 b^2
  c2 = c1*c1; // 16 b^4
  c5 = c2 * c; // 32 b^5
  c8 = c2*c2; // 256 b^8
  c13 = c8* c5; // b^13
  cout <<"xuti operaciit 2^5: "<<c5<<endl; 
  cout <<"xuti operaciit 2^13: "<<c13<<endl; 
}