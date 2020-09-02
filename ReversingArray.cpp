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
  int arr[] = { 1, 2, 3, 4, 5, 6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int front = 0, end = n-1;
  int i, j;
  int mid = front + ( end - front ) / 2;
  for( i = front, j = end; i < mid ,j > mid ; i++, j--)
  {
    swap( arr[i], arr[j]);
  }
  
  for( int i = 0; i < n; i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}
