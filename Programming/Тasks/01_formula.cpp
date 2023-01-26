#include <iostream>
 
using namespace std;
double m,n,p,q,r,s,t,f;
int main()
{
    cout<<"Vuvedete 7 realni chisla: ";
    cin>>m>>n>>p>>q>>r>>s>>t;
    
    f=m+(n/p+q/(r+s/t));
    
    cout<<"Rezultata e: ";
    cout<<f;
 
    return 0;
}
