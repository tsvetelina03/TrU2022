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
    int set_ij(int x, int y)
    {
        i = x;
        j = y;
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
        arr[i].set_ij(i,i+1);
        cout << arr[i].get_product() << endl;
    }
    delete[]arr;
    return 0;
}
