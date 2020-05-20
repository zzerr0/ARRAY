#include<iostream>
using namespace std;
int main()
{
  int arr[]={-1, -1, -2, 4, 3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int min=arr[0];
  int pro=1;
  
  for(int i=0;i<n;i++)
  {
   for(int j=i;j<n;j++)
   {
     pro=1;
    for(int k=i;k<=j;k++)
     { 
      pro=pro*arr[k];
      cout<<arr[k]<<" ";
     }  
     if(pro<min)
      min=pro;
     cout<<endl;
   }
  }
   cout<<"Min element from product of subarray = "
   <<min<<endl;
  return 0; 
}
