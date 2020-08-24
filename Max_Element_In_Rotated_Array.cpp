
/*
Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
Output: true
There is a pair (6, 10) with sum 16
*/

#include<iostream>
using namespace std;
int main()
{
  int n = 6;
  int arr[n] = {11, 15, 6, 8, 9, 10};
  int x = 16;
  int l = 0, h = n-1;
  
  for(int i = 0; i < n; i++)
  {
    if( arr[l] + arr[h] > 16 )
    {
      l++;
    }
    if( arr[l] + arr[h] < 16 )
    {
      h--;
    }
    if( arr[l] + arr[h] == x)
    {
      cout<<"Element Found at position"
      <<" L = "<<l<<" H = "<<h;
      break;
    }
  }
  
}
