#include <iostream>
using namespace std;

int main()
{
     const int size = 5;
    int arr[size];
    for(int i = 0 ; i<size ;i++)
     {
      cin>>arr[i];
     }
     for(int i =0 ; i<size;i++)
    {
        for(int j = i + 1 ; j<size;j++)
      {
         if(arr[i]>arr[j])
         {
          int curNum = arr[i];
          arr[i]=arr[j];
          arr[j]=curNum;
         }
      }
    }
    for(int i = 0 ; i<size ;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
