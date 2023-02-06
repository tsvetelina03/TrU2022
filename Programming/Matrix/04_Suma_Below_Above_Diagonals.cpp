#include <iostream> 
 
using namespace std; 
 
int n,red,kolona; 
 
double numbers[10][20]; 
 
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
 
for (int j = 0; j <= i; j++) 
 
{ 
 
cout << "{A[" <<i<<"," <<j<<"]="<<numbers[i][j]<<"\t"; 
 
} 
 
cout << "\n"; 
 
} 

for (int i = 0;  i < red;  i++) 
 
{ 
 
for (int j = 0; j < n - i ; j++) 
 
{ 
 
cout << "{A[" <<i<<"," <<j<<"]="<<numbers[i][j]<<"\t"; 
 
} 
 
cout << "\n"; 
 
} 
 
return 0; 
}
