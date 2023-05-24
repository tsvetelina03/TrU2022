#include <iostream>
using namespace std;

class samp
{
protected:
    int a, b;

public:
    samp()
    {
        a = 0;
        b = 0;
    }

    samp(int i, int j)
    {
        a = i;
        b = j;
    }

    void get_xy(int& i, int& j)
    {
        i = a;
        j = b;
    }

    samp operator+(const samp& ob1)
    {
        samp temp;
        temp.a = a + ob1.a;
        temp.b = b + ob1.b;
        return temp;
    }
};

int main()
{
    samp o1(20, 20), o2(10, 10), o3;
    o3 = o1 + o2;

    return 0;
}

