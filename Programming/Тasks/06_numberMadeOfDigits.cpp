#include <iostream>
#include <cmath>
using namespace std;
int number;
char a, b, c;
int
main ()
{
    cout<<"a= ";
    cin>>a; 
    cout<<"b= ";
    cin>>b;  
    cout<<"c= ";
    cin>>c;  
    
    number=(a-'0')*100 + (b-'0')*10 + (c-'0');
 
  cout<<"Chisloto e: "<<number<<endl;
  return 0;
}
