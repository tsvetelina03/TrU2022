#include <iostream>
using namespace std;
class samp
{
    int i,j;
public:
    samp()
    {
        i = 0;
        j = 0;
    }
    samp(int x, int y)
    {
        i = x;
        j = y;
        cout << "construct" << endl;
    }
    int get_product() { return i*j; }
    ~samp()
    {
        cout << "destruct"<<endl;
    }
};

int main() {
    samp *arr;
    arr = new samp[10];
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = samp(i, i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i].get_product();
        cout << arr[i].get_product() << endl;
    }
    delete[]arr;
    return 0;
}
