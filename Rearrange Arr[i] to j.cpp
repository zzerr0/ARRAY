#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  int arr[n] = { 1, 3, 0, 2 };
  int arrr[n];
  for( int i = 0; i < n; i++ ){
    arrr[ arr[i] ] = i;
  }
  
  for( int i = 0; i < n; i ++ ){
    cout<<arrr[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
