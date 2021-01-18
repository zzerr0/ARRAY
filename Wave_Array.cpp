




//  W A V E   A R R A Y

#include <iostream>
using namespace std;
int main()
{
  int n = 6;
  int arr[n] = { 1, 2, 3, 4, 5, 6};
  int temp = 0; 
   for( int i = 1; i <= n-1; i = i+2 ){
    temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;
  }
  
  for( int i = 0; i < n; i ++ ){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
