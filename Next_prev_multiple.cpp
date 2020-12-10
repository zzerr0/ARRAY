#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n = 6;
  int brr[n] = {1,2,3,4,5,6};
  int arr[n];
  
  for( int i = 0; i < n; i++){
    if( i == 0 ){
      arr[i] = brr[i] * brr[i+1];
    }
    if( i == n-1 ){
      arr[i] = brr[i] * brr[i-1];
    }
    else{
      arr[i] = brr[i-1] * brr[i+1];
    }
  }
  
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}
