#include<iostream>
using namespace std;
int n;
double num[100];
int main() {
    do{
        cout<<"Vuvedete chislo ot 1 do 100: ";
        cin>>n;
    }while(n<1 || n>100);
    
    for(int i=0;i<=n-1;i++){
        cout<<"x{"<<i<<"}=";
        cin>>num[i];
        
    }
 
    for(int i=n-1;i>=0;i--){
        cout<<"x{"<<i<<"}="<<num[i]<<"\t";
    }
return 0;
 
}
