#include <iostream>
 
using namespace std;
int n;
int smallest=0;
int num[100];
int main()
{
    cout<<"Vuvedete chislo ot 1 do 100: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    smallest=num[0];
    for(int i=0;i<n;i++){
        
      if(num[i]<smallest){
        smallest= num[i];
      }
   
    }
            cout<<smallest;
 
    return 0;
}
