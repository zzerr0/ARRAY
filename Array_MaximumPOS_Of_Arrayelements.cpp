#include<iostream>
#include<algorithm>
//we use this header file to use sort() algorithm
using namespace std;

int max(int *arr, int n)
{
  
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+(arr[i]*i);
  }
  
  return sum ;
  //return this value to the main function
}
int main()
{
  cout<<"\n Enter the size of array \n";
  int n;
  int arr[n];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
   }
  
  sort(arr, arr+n);
  
  cout<<"\n The maximum products of array elements"
      <<"\n can be achieved by arranging array in"
      <<"\n ascending order "<<endl;
  
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
  
  cout<<"\n The maximum product is "<<max(arr, n);
}
