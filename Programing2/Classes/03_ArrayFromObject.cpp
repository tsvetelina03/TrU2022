#include <iostream>
using namespace std;
class samp
{
    int i;
public:
    samp()
    {
        i = 0;
    }
    samp(int a)
    {
        i = a;
    }
    int get_i() { return i; }
};

int main() {
    samp array[5] = { 10,11,12,13,14 };
    for (int i = 0; i < 5; i++)
    {
        cout << array[i].get_i() << endl;
    }
    return 0;
}
