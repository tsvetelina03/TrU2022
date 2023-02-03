#include<iostream>
using namespace std;
int n;
int num[100];
int counter=0;
int umn=1;
int main() {
    
        cout<<"Vuvedete chislo ot 1 do 100: ";
        cin>>n;
   
    
    for(int i=0;i<n;i++){
        cout<<"x{"<<i<<"}=";
        cin>>num[i];
        
    }
   
 
    for(int i=0;i<n;i++){
        
        if(num[i]>=0){
            counter=counter+num[i];
            
        }else umn=umn*num[i];
    }
    cout<<"sumata na polojitelnite: "<<counter<<endl<<"proizvedenie na otricatelnite: "<<umn;
 
return 0;
 
}
