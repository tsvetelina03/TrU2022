#include <iostream> 
 
using namespace std; 
 
int red,kolona; 
double rignt_d=0;
double left_d=0;
 
double numbers[10][10]; 
 
int main() 
 
{ 
 
do { 
 
cout << "Insert the lenght of the column massive(integer beetween 1 and 10):"; 
 
cin >> red; 
 
} while (red < 1 || red> 10); 
 
do { 
 
cout << "Insert the lenght of the row massive(integer beetween 1 and 20):"; 
 
cin >> kolona; 
 
} while (kolona < 1 || kolona> 10); 
 

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
 
if(i==j)
left_d=left_d+ numbers[i][j];
if((i+j)==kolona)
rignt_d=rignt_d+ numbers[i][j];
 
} 
 
} double suma=left_d+rignt_d;
cout<<"Sumata na diagonalite e: "<<suma<<endl;

return 0;

