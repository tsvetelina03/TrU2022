#include<iostream>
using namespace std;
int n,str;
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
   
 
    for(int i=0;i<=n-1;i++){
        
        for(int j=i+1;j<=n-1;j++){
            if(num[i]>num[j]){
                str=num[i];num[i]=num[j];num[j]=str;
            }
        }
            
        
    }
       cout<<"#include<iostream>
using namespace std;
int n,str;
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
   
 
    for(int i=0;i<=n-1;i++){
        
        for(int j=i+1;j<=n-1;j++){
            if(num[i]>num[j]){
                str=num[i];num[i]=num[j];num[j]=str;
            }
        }
            
        
    }
       cout<<"nSorted array";
      for(int i=n-1;i>=0;i--){
         cout<<num[i]<<" ";
   }
 
return 0;
 
}
";
      for(int i=n-1;i>=0;i--){
         cout<<num[i]<<" ";
   }
 
return 0;
 
}
