#include<iostream>
using namespace std;
int year;
 
int main() {
    
    cout<<"Vuvedete godina ";
    cin>>year;
    
    if((year%4==0) || (year%100==0 && year%400==0))
    cout<<"godinata e visokosna  ";
    else cout<<"godinata ne e visokosna ";
 
 
   
return 0;
 
}
