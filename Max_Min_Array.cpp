#include <iostream>
#include <queue>
using namespace std;

int main()
{
  
  //given array, find the Kth smallest element
  int n = 7;
  int arr[n] = { 1, 2, 3, 4, 5, 6, 7 };
  int brr[n];
  int l = 0, r = n-1; 
  for( int i = 0; i < n; i++){
    if( i%2 == 0 ){
     brr[i] = arr[r];
     r--;
    }
    else{
      brr[i] = arr[l];
      l++;
    }
  }
  
  //cout<<"The Kth smallest element is "<<maxh.top()<<endl;
  
  for( int i = 0; i < n; i++ ){
    cout<<brr[i]<<" ";
  }
  
  return 0;
}
