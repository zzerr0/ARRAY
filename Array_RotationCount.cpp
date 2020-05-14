#include<iostream> 
using namespace std; 
int main()
{
  int arr[]={7, 9, 10, 11, 12, 5, 6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int min=arr[0];
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(min>arr[i])
    {
      min=arr[i];
      c=i;
    }
  }
  cout<<"The number of rotations are "<<c<<endl;
  return 0;
}

/*
 Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

Examples:

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2 
*/
