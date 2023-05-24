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
    samp array[3][3] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j].get_i() << " ";
        }
        cout << endl;
    }
    return 0;
}
