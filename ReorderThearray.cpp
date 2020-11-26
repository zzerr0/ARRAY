#include <iostream>
using namespace std;

int main(){
  
  int n = 3;
  int arr[n] = { 10, 11, 12 };
  int index[n] = { 1, 0, 2 };
  int arrA[n];
  
  for( int i = 0; i < n; i++ ){
    arrA[ index[i] ] = arr[i];
  }
  
  for( int i = 0; i < n; i++ ){
    index[i] = i;
    cout<<arrA[i]<<" ";
  }
  cout<<endl;
  for( int i = 0; i < n; i++ ){
   cout<<index[i]<<"  ";
  }
  
  
  cout<<endl;
  
}
