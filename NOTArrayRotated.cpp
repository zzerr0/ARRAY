#include <iostream>
using namespace std;
int main(){
int n = 8;
int arr[n] = { 6, 7, 8, 9, 10, 1, 2, 3};
int low = 0, high = n-1, mid = 0, pre =  0, next = 0;
while( low <= high ){

 mid = low + (high - low )/2;
 next = ( mid + 1 ) % n;
 pre = ( mid + n  - 1 ) % n;

 
 if( arr[mid] <= arr[next] && arr[mid] <= arr[pre]){
  cout<<"Array is rotated "<<n - mid<<" Times"<<endl;
  break;
 }
 else
  if( arr[0] <= arr[mid] ){
   low = mid + 1;
  }
 else
  if( arr[mid] <= arr[n-1]){
   high = mid - 1;
  }
}


return 0;
}
