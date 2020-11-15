


#include <iostream>
using namespace std;

int main(){
  cout<<"Enter N the size of array ";
  int n;
  cin>>n;
  int arr[n], count = 0;
  cout<<"Enter elements containing zero "<<endl;
  for( int i = 0; i < n; i++){
    cin>>arr[i];
  }
  
  //algorithm for moving all the zeroes at the end
  
  for( int i = 0; i < n; i++ ){
    if( arr[i] != 0 ){
      arr[count] = arr[i];
      count++;
    }
  }
  
  while( count < n ){
    arr[count] = 0;
    count++;
  }
  
  
  //displaying the array
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}
