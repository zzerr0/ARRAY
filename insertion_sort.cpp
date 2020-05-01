//INSERTION SORT 

#include<iostream>
using namespace std;
int main()
{
  int n;
  int arr[]={5, 3, 4, 1, 2};
  n=sizeof(arr)/sizeof(arr[0]);
 
 /*
   before sorting 
 [|5| |3| |4| |1| |2|]
 */
  for(int i=1;i<n;i++)
  {
    int blank=i;
    int value=arr[i];
    while(arr[blank-1]>value && blank>0)
    {
      arr[blank]=arr[blank-1];
      blank=blank-1;
    }
    
    arr[blank]=value;
  }

/*
 After sorting 
 [|1| |2| |3| |4| |5|]
 */
 for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
return 0;
   
}
