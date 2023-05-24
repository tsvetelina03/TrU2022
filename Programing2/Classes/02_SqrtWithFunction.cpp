#include <iostream>
using namespace std;
class samp
{
    int i;
public:

    samp(int a)
    {
        i = a;
    }
    int get_i() { return i; }
};
int sqrt_i(samp a)
{
    int s = a.get_i() * a.get_i();
    return s;
}
int main() {
    samp s(7);
    cout <<sqrt_i(s);
    return 0;
}
