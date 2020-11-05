#include <iostream>
using namespace std;

int swap( int *a, int *b ){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int arr[10] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
  // arr[i] should be = i
 
  for( int i = 0; i < 10; i++ ){
    if( arr[i] > -1 && arr[i] < 10 ){
      swap( &arr[i], &arr[ arr[i] ]);
    }
  }
  
  
  for( int i = 0; i < 10; i++ ){
    cout<<arr[i]<<" ";
  }
}
