#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int arr[][4]={
    {1,7,3,4}, 
    {1,5,3,6},
    {1,9,3,8}, 
    {1,10,3,2}, 
  };
  int n=sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<n;i++)
  sort(arr[i],arr[i]+4);
  
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
    cout<<arr[i][j]<<" ";
   }
   cout<<endl;
  }
}
