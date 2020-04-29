//BINARY SEARCH 
#include<iostream>
#include<algorithm>
using namespace std;
//displaying the array
void show(int *arr, int n)
{
  for (int i=0;i<n;i++)
  cout<<arr[i]<<endl;
}
int main()
{
  //size of array
  int noofpass=0;
  int flag=1;
  int n;
  cin>>n;
  //declaring array of that size 
  int arr[n];
  //taking input for array elements
  for(int i =0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  show(arr, n);
  
  //performing bubble sort
  for(int i=0;i<n-1;i++)
  { 
   flag=0;
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=1;
        noofpass++;
      }
    }
  }
  cout<<"_______________________"<<endl;
  cout<<"\nARRAY AFTER BUBBLE SORT "<<endl;
  cout<<"_______________________"<<endl;
  show(arr, n);
  
  cout<<"\n Array is sorted in "<<noofpass
      <<" passes "<<endl;
  return 0;
}
