#include <iostream> 
using namespace std;
int red,kolona;
int suma=0;
double numbers[10][20];
int main()
{
do {
cout << "Insert the lenght of the column massive(integer beetween 1 and 10):";
cin >> red;
} while (red < 1 || red> 10);
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
cout << "------------ \n";
 
//Normal Matrix
for (int i = 0;  i < red;  i++)
{
for (int j = 0; j < kolona; j++)
{
cout << numbers[i][j] << "\t";
}
cout << "\n";
}


for (int i = 0;  i < red;  i++)
{
for (int j = 0; j < kolona; j++)
{
suma=suma+numbers[i][j];
}
cout << "Sumata na reda e:"<<suma<<endl;
suma=0;
}    

cout<<"------------\n";

suma=0;
for (int i = 0;  i < kolona;  i++)
{
for (int j = 0; j < red; j++)
{
suma=suma+numbers[j][i];
}
cout << "Sumata na kolonata e:"<<suma<<endl;
suma=0;
}      
suma=0;
cout<<"------------\n";

for (int i = 0;  i < kolona;  i++)
{
for (int j = 0; j < red; j++)
{
suma=suma+numbers[j][i];
}


}    cout<<"Sumata na vsichki elementi e: "  <<suma;
return 0;

}
