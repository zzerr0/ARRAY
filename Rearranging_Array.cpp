//rotate the array quickly by given rotation number
// yes i did it i did it at my own... 
#include<iostream>
#include<cmath>
using namespace std;
int swap ( int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
int main()
{
  int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  for( int i = 0; i < n; i++)
  {
   for( int j = 0; j < n; j++)
   {
    if( arr[i] != -1 || arr[i] != i)
    {
      if( arr[j] == i)
      {
        swap( arr[i], arr[j]);
      }
    }
   }
  }
  
  for( int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
