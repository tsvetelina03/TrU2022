#include<iostream>
using namespace std;
double x,y;
 
int main() {
    
    cout<<"Vuvedete stoinost na x i y: ";
    cin>>x>>y;
    
    if(x>=-1 && x<=1 && y>= -1 && y<=1) 
    cout<<"Tochkata prinadleji na kvadrata ";
    else cout<<"Tochkata ne prinadleji na kvadrata ";
 
 
   
return 0;
 
}
