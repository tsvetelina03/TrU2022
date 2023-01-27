#include<iostream>
using namespace std;
double a,b,c,m;
 
int main() {
    
    cout<<"Vuvedete 3 realni chisla: ";
    cin>>a>>b>>c;
    
    m=a;
    if(b<m)m=b;
    if(c<m)m=c;
    
    cout<<"nai-malkoto chislo e: "<<m;
    
   
return 0;
 
}
