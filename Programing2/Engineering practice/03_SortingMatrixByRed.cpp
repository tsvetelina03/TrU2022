#include <iostream>
using namespace std;
int red,kolona;
int numbers[10][20];
int main()
{
do {
cout << "Insert the lenght of the column massive(integer beetween 1 and 10):";
cin >> red;
} while (red < 1 || kolona> 10);
do {
cout << "Insert the lenght of the row massive(integer beetween 1 and 20):";
cin >> kolona;
} while (kolona < 1 || kolona> 20);
 
 
for (int i = 0; i < red; i++)
{
for (int j = 0; j < kolona;  j++)
{
cout << "A[" << i << "] [" << j << "]= ";
cin >> numbers[i][j];
}

}

for (int i = 0;  i < red;  i++)
{
for (int j = 0; j < kolona; j++)
{
cout << numbers[i][j] << " ";
}
cout << "\n";

}
cout<<"--------------------------------";
cout << "\n";
 for(int i =0 ; i<red;i++)
    {
        for(int j = 0 ; j<kolona;j++)
       {
            for(int k = 0 ; k<i+1;k++)
           {
               for(int p = 0 ; p<j+1;p++)
                {
                  if(numbers[i][j]<numbers[k][p])
                {
                    int curr = numbers[i][j];
                    numbers[i][j] = numbers[k][p];
                    numbers[k][p]=curr;
          
                }
              }
            }
        }
    }
for (int i = 0;  i < red;  i++)
{
for (int j = 0; j < kolona; j++)
{
cout << numbers[i][j] << " ";
}
cout << "\n";

}
return 0;
 
}
