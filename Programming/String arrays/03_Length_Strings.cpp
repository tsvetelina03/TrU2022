#include <iostream>

#include <cstring>

using namespace std;

int histo[26]={0},i=0;

char s[100];

int n;

int main()

{
    cout<<"Vuvedete niz: ";

    cin>>s;

   int len=strlen(s);

    for(int i=0;i<len;i++){

      histo[s[i]-'a']++;
    }
     for(int i=0;i<26;i++){

       if(histo[i]>0){

           cout<<(char)('a'+i)<<":"<<histo[i]<<endl;
       }

     }

    return 0;

}
