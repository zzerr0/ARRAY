#include <iostream>
using namespace std;
class Bitonic {
 public :
  int findPeak(int *, int );

};

int Bitonic :: findPeak( int arr[], int n ){
 int low = 0, high = n-1, mid = 0;
 while( low <= high ){
  mid = low + ( high - low )/2;
  
  if( mid != 0 && mid != n-1 ){
   if( arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
    return mid;
   }
   else
    if( arr[mid-1] > arr[mid]){
     high = mid-1;
    }
   else{
    low = mid + 1;
   } 
  }
  else
   if( mid == 0 ){
    if( arr[mid] > arr[mid+1]){
     return mid;
    }
    else{
     return mid+1;
    }
   }
  else
   if( mid == n-1 ){
    if( arr[mid] > arr[mid-1]){
     return mid;
    }
    else{
     return mid-1;
    }
   }
  
 }//end of while
 
  return -1;
}//end of method

int main()
{
 int arr[6] = { 1, 3, 60, 40, 23, 12 };
 Bitonic obj;
 cout<<"Peak Element is at "<<obj.findPeak( arr, 6)<<endl;
return 0;
}
