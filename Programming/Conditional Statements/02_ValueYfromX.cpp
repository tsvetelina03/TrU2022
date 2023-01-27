#include<iostream>
using namespace std;
int x;
 
int main() {
    
    cout<<"Vuvedete stoinost na x: ";
    cin>>x;
    
    if(x<=8) cout<<x;
    else if(x>8 && x<=24) cout<<2;
    else cout<<x-1;
 
 
   
return 0;
 
}
