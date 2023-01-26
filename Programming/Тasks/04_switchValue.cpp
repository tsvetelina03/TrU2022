#include <iostream>
#include <cmath>
using namespace std;
double a,b,c;
int main()
{
    cout<<"Vuvedete 2 realni chisla: ";
    cin>>a>>b;
    
    c=a;
    a=b;
    b=c;
    
    cout<<"Smqna na chislata: ";
    cout<<a<<" "<<b;
 
    return 0;
}
