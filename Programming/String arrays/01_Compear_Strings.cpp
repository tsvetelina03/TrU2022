#include <iostream>

#include <cstring>

using namespace std;

char str1[21],str2[21];

int main()

{

    cout<<"Vuvedete niz do 20 simvola: ";

    cin>>str1;

    int len=strlen(str1);

    for(int i=len-1;i>=0;i--){

        str2[len-i-1]=str1[i];

    }

    str2[len]='\0';

    if(!strcmp(str1,str2)){

        cout<<"Nizut e palindrom!"<<endl;

    }else{

        cout<<"Nizut ne e palindrom!"<<endl;

    }

    return 0;
}
