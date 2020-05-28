

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr1[] = {3, 4, 5};
  int arr2[] = {1, 2, 2};
  int n= sizeof(arr1)/sizeof(arr1[0]);
  n=n*2;
  int arr3[n];
  int a=-1; 
  for(int i=0;i<n;i=i+2)
  {
   a++;
   arr3[i]=arr1[a];
   arr3[i+1]=arr2[a];
  }
  sort(arr3, arr3+n);
  for(int i=0;i<n;i++)
  cout<<arr3[i]<<endl;
  return 0; 
}
