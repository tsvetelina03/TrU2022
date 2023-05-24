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

int main() {
    samp *da;
    da = new samp(10);
    cout << da->get_i();
    delete da;
   
    return 0;
}
