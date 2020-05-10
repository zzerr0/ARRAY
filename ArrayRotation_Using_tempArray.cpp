#include<iostream>
using namespace std;
int main()
{
  int arr[7]={1, 2, 3, 4, 5, 6, 7};
  cout<<"\n The Orignal Array is "<<endl;
  for(int i =0; i<7;i++)
  {
    cout<<arr[i]<<endl;
  }
  cout<<"Enter the rotation number "<<endl;
  int ro;
  cin>>ro;
  cout<<"______"<<endl;
  int temp[ro];
  for(int i=0;i<7;i++)
  {
    temp[i]=arr[i];
  }
  for(int i=ro;i<7;i++)
  {
    arr[i-ro]=arr[i];
  }
  int j=0;
  for(int i=7-ro;i<7;i++&& j++)
  {
   arr[i]=temp[j];
  }
  
  for(int i =0; i<7;i++)
  {
    cout<<arr[i]<<endl;
  }
}
