#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  cout<<"How many elements do you want to enter"<<endl;
  int n;
  cin>>n;
  cout<<"Enter the elements "<<endl;
  int arr[n];
  for( int i = 0; i < n; i++ ){
    cin>>arr[i];
  }
  
  int temp = arr[n-1];
  
  for( int i = n-2; i >=0; i-- ){
    arr[i+1] = arr[i];
  }
  
  arr[0] = temp;
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  
}
