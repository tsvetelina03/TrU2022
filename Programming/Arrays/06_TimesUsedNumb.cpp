#include<iostream>
using namespace std;
int n,a;
int num[100];
int counter=0;
 
int main() {
    do{
        cout<<"Vuvedete chislo ot 1 do 100: ";
        cin>>n;
    }while(n<1 || n>100);
    
    for(int i=0;i<n;i++){
        cout<<"x{"<<i<<"}=";
        cin>>num[i];
        
    }
    cin>>a;
 
    for(int i=0;i<n;i++){
        
        if(a==num[i]){
            counter++;
            
        }
    }
    cout<<"chisloto "<<a<<" se sadurja "<<counter<<" puti v  redicata";
 
return 0;
 
}
