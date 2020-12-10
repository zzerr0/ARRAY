

// S H U F F L I N G - A R R AY
#include <iostream>
using namespace std;

void shuffle( int arr[], int n ){
  int temp = 0;
  int randint = 0;
  
  for( int i = 0; i < n; i++){
    randint = rand() % n;
    temp = arr[i];
    arr[i] = arr[ randint ];
    arr[ randint ] = temp;
  }
}

int main()
{
  int n = 10;
  int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  cout<<"Array before shuffle "<<endl;
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Array After shuffle "<<endl;
  //calling the shuffle function
  shuffle( arr, n );
  for( int i = 0; i < n; i++ ){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
