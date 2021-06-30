#include <iostream>
using namespace std;
// 5, 10, 30, 20, 50, 70, 60 
class NearlySortedArray {
 public:
  int findElement( int arr[], int n, int toFind){
   int low = 0, high = n-1, mid = 0;
   while( low <= high ){
    mid = low + (high - low )/2;
    
    if( arr[mid] == toFind ){
     return mid;
    }
    else
     if( mid-1 >= 0 && arr[mid-1] == toFind ){
      return mid-1;
     }
    else
     if( mid+1 <= n-1 && arr[mid+1] == toFind){
      return mid+1;
     }
    else{
     if( arr[mid] < toFind ){
      low = mid+2;
     }
     else{
      high = mid-2;
     }
    }
   }
   
   return -1;
  }
};

int main(){
 int n = 8, toFind = 0;
 int arr[n] = { 5, 10, 30, 20, 50, 70, 60, 80 };
 NearlySortedArray obj;
 for(int i = 0; i < n; i++ ){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter the element to find "<<endl;
 cin>>toFind;
 cout<<"Element found at Index "<<obj.findElement( arr, n, toFind )<<endl;
return 0;
}
