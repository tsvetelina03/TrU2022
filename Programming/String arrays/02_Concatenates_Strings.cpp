#include <iostream>

#include <cstring>

using namespace std;

char str1[21] [11];

char nov[220];

int n;

int main()

{
    cout<<"Vuvedete broi nizove do 10 simvola: ";

    cin>>n;

    for(int i=0;i<=n-1;i++){

      cout<<"str["<<i<<"]= ";

      cin>>str1[i];

    }

     for(int i=0;i<=n-1;i++){

         strcat(nov,str1[i]);

     }

    cout<<nov<<endl;

    return 0;

}
