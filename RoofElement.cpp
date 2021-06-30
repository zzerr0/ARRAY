#include <iostream>
using namespace std;

class Roof {
 public:
  int findRoof( int arr[], int n, int tofind){
   int low = 0, high = n-1, mid = 0, roof = 0;
   while( low <= high ){
    mid = low + ( high - low )/2;
    if( arr[mid] == tofind ){
     return arr[mid];
    }
    else
     if( arr[mid] > tofind ){
       roof = arr[mid];
       high = mid-1;
     }
    else{
     low = mid+1;
    }
   }
   
   return roof;
  
  }
};

int main(){
 int n = 9;
 int arr[n] = { 1, 2, 3, 4, 8, 10, 12, 13, 14 };
 for( int i = 0; i < n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 int tofind = 0;
 cout<<"Enter element to find "<<endl;
 cin>>tofind;
 Roof obj;
 cout<<"The Roof element of "<<tofind<<" is "<<obj.findRoof( arr, n, tofind)<<endl;
return 0;
}
