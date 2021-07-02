#include <iostream>
using namespace std;

class Infinite_Array {
 public : 
  int findHigh( int *, int, int  );
  
};

int Infinite_Array :: findHigh( int arr[], int n, int tofind ){
 int low = 0, high = 1, mid = 0, firstocc = 0;
 
 while( arr[high] < tofind ){

   if( arr[high] < tofind ){
    low = high;
    high = high*2;
   }
 }
 
 while( low <= high ){
  mid = low + ( high - low )/2;
  
  if( arr[mid] == tofind ){
   firstocc = mid;
   high = mid-1;
  }
  else
   if( arr[mid] > tofind ){
    high = mid-1;
   }
  else{
   low = mid + 1;
  }
 }
 return firstocc;
}

int main(){
 int n = 1000, tofind = 1;
 int arr[n];
 for( int i = 0; i < n; i++ ){
  arr[i] = 0;
  if( i > 500 ){
   arr[i] = 1;
  }
 
 }

 cout<<endl;
 Infinite_Array obj;
 
 cout<<"First Occurence of 1 is at Index "<<obj.findHigh( arr, 50, tofind )<<endl;
return 0;
}
