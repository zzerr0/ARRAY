#include <iostream>
using namespace std;

class Infinite_Array {
 public : 
  int findHigh( int *, int, int  );
  
};

int Infinite_Array :: findHigh( int arr[], int n, int tofind ){
 int low = 0, high = 1, mid = 0;
 
 while( arr[high] < tofind ){

  if( arr[high] == tofind ){
   mid = high;

   return mid;
  }
  else
   if( arr[high] < tofind ){
    low = high;
    high = high*2;
   }
 }
 
 while( low <= high ){
  mid = low + ( high - low )/2;
  
  if( arr[mid] == tofind ){
   return mid;
  }
  else
   if( arr[mid] > tofind ){
    high = mid-1;
   }
  else{
   low = mid + 1;
  }
 }
 return -1;
}

int main(){
 int n = 1000, tofind = 996;
 int arr[n];
 for( int i = 0; i < n; i++ ){
  arr[i] = i * 3;
 }
 for( int i = 0; i < n; i++ ){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 Infinite_Array obj;
 
 cout<<"Element found at Index "<<obj.findHigh( arr, 50, tofind )<<endl;
return 0;
}
