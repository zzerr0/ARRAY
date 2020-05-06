#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int n=6;
  int arr[n]={10, 20, 30, 40, 50};
  
  //Traversing An Array 
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<endl;
  }
  
  //INSERTION AT BEGINING 
  for(int i=n-1;i>=0;i--)
  {
    arr[i]=arr[i-1];
  }
  int val=60;
  arr[0]=val;
  
  //insertion at given index 
  int pos, value;
  cout<<"\n pose value "<<endl;
  cin>>pos>>value;
  for(int i=n-1;i>=pos-1;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[pos-1]=value;
  cout<<endl;
  //insertion after index 
   int po, va;
  cout<<"\n pose value "<<endl;
  cin>>po>>va;
  for(int i=n-1;i>=pos;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[po]=va;
  cout<<endl;
  
  
  //Traversing An Array 
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}
