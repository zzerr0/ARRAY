#include <iostream>
using namespace std;

class First_Last {
 public :
  int firstOcc(int arr[], int n, int x){
  int fIndex = -1, low = 0, high = n-1, mid = 0;
  
  while( low <= high ){
   mid = low + (high - low) / 2;
   if( arr[mid] == x){
    fIndex = mid;
    high = mid - 1;
   }
   else
    if( x < arr[mid] ){
     high = mid - 1;
    }
   else{
    low = mid + 1;
   }
  }
  
  return fIndex; 
  }
  
  int lastOcc(int arr[], int n, int x){
   int lIndex = -1, low = 0, high = n-1, mid  = 0;
  
  while( low <= high ){
   mid = low + (high - low) / 2;
   if( arr[mid] == x){
    lIndex = mid;
    low = mid + 1;
   }
   else
    if( x < arr[mid] ){
     high = mid - 1;
    }
   else{
    low = mid + 1;
   }
  }
  
  return lIndex; 
  }

};

int main(){
 First_Last obj1;
 First_Last obj2;
 
 int arr[8] = { 4, 5, 6, 7, 8, 10, 10, 10 };
 int x = 10;
 cout<<"First Occurence "<<obj1.firstOcc(arr, 8, x)<<" Last Occurence "<<obj2.lastOcc(arr, 8, x)<<endl;
 

return 0;
}
