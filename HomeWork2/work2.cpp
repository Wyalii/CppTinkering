#include <iostream>
using namespace::std;
int main()
{
    int a,firstDigitDivision, FirstDigitModule;
    cout << "shemoitane ricxvi romelic n<100: ";
    cin>> a;
    firstDigitDivision = a/10; // tu n = 57, 57/10 = 5
    FirstDigitModule = a%10; // tu n = 57 57%10 = 7
    cout<<"gayofis xerxit: "<<firstDigitDivision<<endl;
    cout<<"modulis operatorit: "<<FirstDigitModule<<endl;
    return 0;
}