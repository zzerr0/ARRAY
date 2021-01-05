


// Mean and Median of an Array

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
  
  int arr[] = { 1, 3, 4, 2, 6, 5, 7, 8};
  int size = sizeof(arr)/sizeof(arr[0]);
 
  cout<<"The unsorted array is "<<endl;
  for( int i = 0; i < size; i++ ){
    cout<<arr[i]<<" ";
  }
  
  sort( arr, arr + size );
  cout<<endl;
  cout<<"The sorted array is "<<endl;
  for( int i = 0; i < size; i++ ){
    cout<<arr[i]<<" ";
  }
  float sum = 0, mean, median;
  cout<<"The mean of array is "<<endl;
  mean = accumulate( arr, arr + size, sum)/size;
  cout<<mean<<endl;
  
  if( size%2 == 0 ){
    median
  }
  
 return 0;
}
