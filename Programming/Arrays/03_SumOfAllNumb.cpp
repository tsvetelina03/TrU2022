#include<iostream>
using namespace std;
int n,a;
int num[100];
int sum=0;
int main() {
    do{
        cout<<"Vuvedete chislo ot 1 do 100: ";
        cin>>n;
    }while(n<1 || n>100);
    
    for(int i=0;i<n;i++){
        cout<<"x{"<<i<<"}=";
        cin>>num[i];
        
    }
 
    for(int i=0;i<n;i++){
   sum =sum+num[i];
    }
    cout<<sum;
return 0;
 
}
