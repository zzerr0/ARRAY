#include<iostream>
#include<algorithm>
using namespace std;
int swap( int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9}; 
  int n = sizeof(arr) / sizeof(arr[0]);
  sort( arr, arr + n );
  int p;
  for( int l = 0; l < n; l++)
  {
    if( arr[l] == abs( arr[l]) )
    {
      p = l;
      break;
    }
  }
  int limit = 3;
  int i, j;
  for( i = 0, j = 0; i < n; i++,j++)
  { 
    if( limit == 0 )
    {
      break;
    }
   if( i % 2 != 0)
   {
      swap( arr[i], arr[p]);
   }
   
   p++;
   limit--;
  }
  
  for( int l = 0; l < n; l++)
  {
    cout<<arr[l]<<" "<<endl;
  }
}
