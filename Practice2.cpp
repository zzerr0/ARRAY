/*
Find pair with given sum in the array
*/
 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  cout<<"Enter number of elements "<<endl;
  int n;
  cin>>n;
  int arr[n];
  int sum = 10;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  
  //Naive Approach 
  for(int i = 0; i < n; i++)
   for(int j = i; j < n; j++)
   {
     if( arr[i] + arr[j] == sum)
     {
       cout<<"Match found at index "<<i<<" & "<<j<<endl;
       break;
     }
   }
   
  /*
     O( n log n ) using sorting method
  */
  sort(arr, arr + n);
  int i = 0;
  int j = n-1;
  while(i <= j)
  {
    if(arr[i] + arr[j] == sum)
    {
     break;
    }
    
    if(arr[i] + arr[j] < sum )
    i++;
    
    if(arr[i] + arr[j] > sum )
    j--;
  }
  cout<<"Match Found at index "<<i<<" & "<<j;
  return 0;
}
