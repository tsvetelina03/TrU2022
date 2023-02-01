#include <iostream>
 
using namespace std;
char let ;
char letter;
int main()
{
    do{
        cout<<"Vuvedete bukva: ";
        cin>>let;
    }while(let<'a'|| let>'z');
    letter=let-'a'+'A';
    cout<<letter;
 
    return 0;
}
