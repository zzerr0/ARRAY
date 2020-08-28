//rotate the array quickly by given rotation number

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n = 10;
  int arr[n];
  for( int i = 0; i <10; i++)
  {
    arr[i] = i+1;
  }
   
  int k = 3;
  int temp[k];
  for( int i = 0; i < k; i++)
  {
   temp[i] = arr[ n-1-i];
  }
  
  for( int i = n-1 ; i >= k; i--)
  {
    arr[i] = arr[i-k];
  } 
  
   for(int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
   for( int i = 0 ; i < n; i++)
  {
   cout<<arr[i]<<endl;
  }
  return 0;
}
