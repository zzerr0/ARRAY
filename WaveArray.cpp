#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n = 6;
  int arr[n] = { 1,2,3,4,5,6};
  sort( arr, arr+n, greater<int>());
  int count = 0;
  for( int i = 1; i < n; i = i+2 ){
      int temp = arr[i];
      arr[i] = arr[i-1];
      arr[i-1] = temp;
    
  }
  
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
