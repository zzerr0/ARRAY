//selection sort
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  //taking input of 5 elements
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  //SELECTION SORT
  for(int i=0;i<n-1;i++)
  { int min;
    min=i;
    for(int j=i+1;j<n;j++)
    {
      /*this loop will run 5 times and will find
      minimum element */
      if(arr[j]<arr[min])
      min=j;
    }
    //swapping the minimum element.. with left most
    int tmp=arr[i];
    arr[i]=arr[min];
    arr[min]=tmp;
  }
  //displaying the sorted array 
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
    cout<<endl;
  }
  
  
  return 0;
}
