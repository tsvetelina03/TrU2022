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
    int sqrt() { return i * i; }
};
int main() {
    samp a(100);
    cout << a.sqrt();
    return 0;
}
