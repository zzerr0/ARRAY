#include <iostream>
using namespace std;

int main()
{
  cout<<"How many elements do you want to enter"<<endl;
  int n;
  cin>>n;
  int arr[n];
  
  for( int x = 0; x < n; x++){
    cin>>arr[x];
  }
  
  // declare variables
  int i = 0, j, key = 0;
  for( i = 1; i < n; i++){
    key = arr[i];
    j = i-1;
    while( j >=0 && arr[j] > key ){
      arr[j+1] = arr[j];
      j = j-1;
    }
    
    arr[j+1] = key;

  }
  
  cout<<"The sorted array is "<<endl;
   for( int x = 0; x < n; x++){
    cout<<arr[x]<<" ";
  }
  
}
