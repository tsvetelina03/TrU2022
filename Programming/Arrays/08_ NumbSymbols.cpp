#include<iostream>
using namespace std;
int n;
char ch[100];
 
int main() {
    
    do{
        cout<<"Vuvedete chislo ot 1 do 100: ";
        cin>>n;
    }while(n<1 || n>100);
    
    for(int i=0;i<=n-1;i++){
        cout<<"x{"<<i<<"}=";
        cin>>ch[i];
        
    }
   
 
    for(int i=0;i<=n-1;i++){
        
        if(ch[i]>='0'&& ch[i]<='9'){
          cout<<ch[i]<<endl;
            
        }
    }
   
 
return 0;
 
}
