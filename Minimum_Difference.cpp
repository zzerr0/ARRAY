#include <iostream>
#include <algorithm>
using namespace std;

class MinDiff {
public :
 int findMinDiff( int *, int, int );

};

int MinDiff :: findMinDiff( int arr[], int n, int tofind ){
 int low = 0, high = n-1, mid = 0, mindiff = 0;
 while( low <= high ){
  mid = low + ( high - low )/2;
  if( arr[mid] == tofind ){
   return 0;
  }
  else 
   if( arr[mid] > tofind ){
    high = high - 1;
   }
  else{
   low = low + 1;
  }
 }
 
 return min( abs( arr[low] - tofind ), abs( arr[high] - tofind ) );
}

int main(){

 int n = 11;
 int arr[n] = { 1, 2, 3, 4, 6, 8, 9, 10, 12, 13, 22 };
 for( int i = 0; i < n; i++ ){
  cout<<arr[i]<<" ";
 }
 int tofind = 17;
 cout<<endl;
 MinDiff obj;
 cout<<"Min diff is "<<obj. findMinDiff( arr, n, tofind)<<endl;
return 0;
}
