#include<iostream>
using namespace std;
int main()
{
  int n; //n=size of array
  cout<<"Enter the size of array ";
  cin>>n;
  cout<<endl;
  int arr[n];//array sapce initialized for n elements
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //Printing the given array by user
  cout<<"Orignal Array is \n"<<endl;
   for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }  
  //array rotation one by one... 
  cout<<"Enter number of Rotations ";
  int r;//r=no. of rotation
  cin>>r;
  cout<<endl;
  while(r>0) 
  {
    int temp=arr[0];//temp = first element of array
    for(int i=1;i<n;i++)
    {
     arr[i-1] = arr[i];
    }
    arr[n-1]=temp; //assigning temp value to last position
    r--;//decreasing the r value
  }
  //Printing the rotated array
   cout<<"Rotated Array is \n"<<endl;
   for(int i=0;i<n;i++)
  {
    cout<<arr[i];
    cout<<endl;
  }
  
  return 0;
}
