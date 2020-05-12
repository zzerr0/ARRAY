#include<iostream>
using namespace std; 
int main()
{
  int n;
  cout<<"\n Enter size of array "<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<endl;
  cout<<"Enter number of rotation "<<endl;
  int ro;
  cin>>ro;
  while(ro>0)
  {
    int temp=arr[n-1];
    //moving elements one place ahead to right after 00
    for(int i=n-1;i>0;i--)
    {
      arr[i]=arr[i-1];
    }
    arr[0]=temp;
    ro--;
  }
  
   for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}

/*
  Program to cyclically rotate an array by one
Given an array, cyclically rotate the array clockwise by one.

Examples:

Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Following are steps.
1) Store last element in a variable say x.
2) Shift all elements one position ahead.
3) Replace first element of array with x.
*/
