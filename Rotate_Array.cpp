#include <iostream>
using namespace std;

//rotating the array using temp array

int main()
{
  cout<<"Enter the Size of Array"<<endl;
  int n;
  cin>>n;
  
  //Decalairing the size of array
  int arr[n];
  cout<<"Enter the array elements "<<endl;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the number of elements for rotation"<<endl;
  int d;
  cin>>d;
  if( d > n ){
    d = d - n;
  }
  
  //declaring a temp array of size d
  int temp[d];
  //storing the first d elements in a temp array
  for( int i = 0; i < d; i++){
    temp[i] = arr[i];
  }
  
  //algorithm for rotating the array
  for( int i = d; i < n; i++ ){
    arr[i-d] = arr[i];
  }
  int j=0;
  
  //putting d elements at rotated position
  for( int i = n-d; i < n; i++ ){
    arr[i] = temp[j];
    j++;
  }
  
  for( int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }

}
