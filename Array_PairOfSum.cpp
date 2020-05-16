#include<iostream>
using namespace std;
int main()
{
  int arr[]={-8, 1, 4, 6, 10, 45};
  int n=sizeof(arr)/sizeof(arr[0]);
  int l=0, r=n-1;
  int x=14;
  while(l<r)
  {
    if(arr[l]+arr[r]==x)
    {
      cout<<"\nPair of sum "<<x<<" is found at index "
      <<"arr["<<l<<"] & arr["<<r<<"]"<<endl;
      //if found then come out of the loop
      break;
    }
    else 
    if(arr[l]+arr[r]<x)
    {
      l++;
    }
    else
    r--;
    
  }
  return 0;
}
/*
 
 
hasArrayTwoCandidates (A[], ar_size, sum)
Sort the array in non-decreasing order.
Initialize two index variables to find the candidate
elements in the sorted array.
Initialize first to the leftmost index: l = 0
Initialize second the rightmost index: r = ar_size-1
Loop while l < r.
If (A[l] + A[r] == sum) then return 1
Else if( A[l] + A[r] < sum ) then l++
Else r–
No candidates in whole array – return 0
*/
