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
  int arr[5] = { 1, 2, 3, 4, 5};
  //arr[i] should be = i
 
  int start = 0;
  int end = 5-1;
  
  while( start < end ){
    swap( arr[start], arr[end] );
     start++;
     end--;
  }
  
  for( int i = 0; i < 5; i++ ){
    cout<<arr[i]<<" ";
  }
}
