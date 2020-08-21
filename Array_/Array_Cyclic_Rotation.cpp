#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  cout<<"Enter thr number of elements "<<endl;
  int n;
  cin>>n;
  cout<<"Enter the array elements "<<endl;
  int array[n];  
  for(int i = 0; i < n; i++)
  {
    cin>>array[i];
  }
  
  int x = array[n-1];
  
  for(int i = n-2; i >= 0; i--)
  {
    array[i + 1] = array[i];
  }
  
  array[0] = x;
  cout<<"Rotated Array is "<<endl;
  for(int i = 0; i < n; i++)
  {
    cout<<array[i]<<endl;
  }
  return 0;
  
}
  
  
