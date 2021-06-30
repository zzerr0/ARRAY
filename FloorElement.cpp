#include <iostream>
using namespace std;

class Floor {
 public:
  int findFloor( int arr[], int n, int tofind ){
   int low = 0, high = n-1, mid = 0, floor = 0;
   while( low <= high ){
    mid =  low + (high - low )/2;
    if( arr[mid] == tofind ){
     floor = arr[mid];
     return floor;
    }
   else
    if( arr[mid] < tofind ){
     floor = arr[mid];
     low = mid+1;
    }
   else{
    high = mid-1;
   }
   }
   return floor;
  }
};

int main(){
 int n = 9;
 int arr[n] = { 1, 2, 3, 4, 8, 10, 12, 13, 14 };
 for( int i = 0; i < n; i++ ){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter the element to find "<<endl;
 int tofind = 0;
 cin>>tofind;
 Floor obj;
 cout<<"Floor element of "<<tofind<<" is "<<obj.findFloor( arr, n, tofind )<<endl;

}
