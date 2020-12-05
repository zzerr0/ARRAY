#include <iostream>
using namespace std;

int main()
{
  int n = 9;
  int arr[n] = { 1, -2, 3, 4, 6, -6, 7, -8, 9 };
  
  int count = 0;
  for( int i = 0; i < n; i++ ){
    if( arr[count] < 0 ){
      count++;
    }
    
    if( arr[i] < 0 && arr[count] >= 0 ){
      int temp = arr[i];
      arr[i] = arr[count];
      arr[count] = temp;
    }
  }
  
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
