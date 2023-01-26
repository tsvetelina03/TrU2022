#include <iostream>
#include <cmath>
using namespace std;
int a;
short b,c,d;
int main()
{
    cout<<"Vuvedete tricifreno polojitelno chislo: ";
    cin>>a;
    
    b=a/100;
    c=a/10%10;
    d=a%10;
    
    cout<<"Smqna na stoticite: "<<b<<endl;
   cout<<"Smqna na stoticite: "<<c<<endl;
   cout<<"Smqna na stoticite: "<<d<<endl;
    return 0;
}
