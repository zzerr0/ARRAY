#include <iostream>
using namespace std;
int main(){
 int n = 5;
 char arr[n] = { 'a', 'c', 'd', 'h', 'i'};
 int low = 0, high = n-1, mid = 0;
 char key = 'h', roof = '#';
 
 while( low <= high ){
  mid = low + ( high - low )/2;
  
  if( arr[mid] == key ){
   low = low +1 ;
  }
  else
   if( arr[mid] > key ){
    roof = arr[mid];
    high = mid - 1;
   }
  else
   if( arr[mid] < key ){
    low = low + 1;
   }
  
 } 
 
 cout<<"FInal Roof element is "<<roof<<endl;
return 0;
}
