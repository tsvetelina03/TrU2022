#include <iostream>
#include <cmath>
using namespace std;
double a,b,c,sqAvg;
int main()
{
    cout<<"Vuvedete 3 realni chisla: ";
    cin>>a>>b>>c;
    
    sqAvg=sqrt(((a*a)+(b*b)+(c*c))/3);
    
    cout<<"Rezultata e: ";
    cout<<sqAvg;
 
    return 0;
}
