#include <iostream>
using namespace std;
class FindElement {
 public :
 //	F1
  int findMinIndex( int arr[], int n){
   int low = 0, high = n-1, mid = 0, next = 0, prev = 0;
   while( low <= high ){
    mid = low + ( high - low )/2;
    next = ( mid + 1 ) % n;
    prev = ( mid + n - 1) % n;
   
    if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
     return mid;
    }
    else
     if( arr[0] <= arr[mid] ){
     low = mid + 1;
    }
    else 
     if( arr[mid] <= arr[n-1] ){
      high = mid-1;
     }
  
   }
   
   return -1;
  }
//	F2
 int Result( int arr[], int n, int toFind ){
  int minIndex = findMinIndex( arr, n ), lResult = 0, rResult = 0;
  lResult = lBinarySearch( arr, 0, minIndex-1, toFind );
  rResult = rBinarySearch( arr, minIndex, n-1, toFind );
  if(lResult >= 0 ){
   return lResult;
  }
  if( rResult >= 0 ){
   return rResult;
  }
  return -1;
 }
//	F3
 int lBinarySearch( int arr[], int low, int high, int toFind ){
  int mid = 0;
  while( low <= high ){
   mid = low + ( high - low )/2;
   if( arr[mid] == toFind ){
    return mid;
   }
   else
    if( arr[mid] < toFind ){
     low = mid + 1;
    }
   else{
   high = mid - 1;
   }
  }
  return -1;
 }
//	F4  
 int rBinarySearch( int arr[], int low, int high, int toFind ){
  int mid = 0;
  while( low <= high ){
   mid = low + ( high - low )/2;
   if( arr[mid] == toFind ){
    return mid;
   }
   else
    if( arr[mid] < toFind ){
     low = mid + 1;
    }
   else{
   high = mid - 1;
   }
  }
  return -1;
 }
 
};

int main(){
 cout<<"Enter the size of sorted rotated array "<<endl;
 int n = 8, toFind = 0;
 int arr[n] = { 11, 12, 15, 18, 2, 5, 6, 8};
 FindElement obj;
 for(int i = 0; i < n; i++ ){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter an element to find "<<endl;
 cin>>toFind;
 cout<<"Min is found at Index "<<obj.Result(arr, n, toFind )<<endl;

 return 0;
}
