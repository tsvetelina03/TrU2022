#include <iostream>
using namespace std;

class base
{
protected:
    int x;
public:
    base() {
        x = 0;
    }
    base(int t)
    {
        x = t;
        cout << "constructing base" << endl;
    }
    ~base() { cout << "destructing base" << endl; }
    void showx() { cout << x << endl; }
};
class derived:protected base
{
    int y;
public:
    derived(int a, int t): base(t)
    {
        y = a;
        cout << "constructing derived" << endl;
    }
   
    ~derived() { cout << "destructing derived" << endl; }
    void showxy() { cout << y <<" "<<x<< endl; }
};

int main()
{
    derived ob1(20, 10);
    ob1.showxy();
    return 0;
}

