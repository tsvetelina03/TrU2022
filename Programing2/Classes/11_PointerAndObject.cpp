#include <iostream>
using namespace std;

class samp
{
private:
    int a;
public:
    samp(int x);
    int get();
    void set(int x);
};
samp::samp(int x)
{
    a = x;
}
int samp::get()
{
    return a;
}
void samp::set(int x)
{
    a = x;
}
int main()
{
    samp ob(120);
    int x = ob.get();
    ob.set(22);

    samp* p;
    p = &ob;
    cout << "Value using obj: " << ob.get()<<endl;
    cout << "Value using pointer: " << p->get();
    return 0;
}

