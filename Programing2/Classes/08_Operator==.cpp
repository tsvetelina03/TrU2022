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
    bool operator==(samp x);
};
bool samp :: operator==(samp x)
{
    return a == x.a && b == x.b;
}
int main()
{
    samp o1(20, 20), o2(10, 10);
    if (o1 == o2)
    {
        cout << "ravni sa";
    }
    else
        cout << "ne sa ravni";

    return 0;
}
