#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  
  int n = 6;
  int arrA[n] = { 1, 3, 5, 2, 4, 6 };
  
  //rearrange smallest, largest, second smallest, second largest
  
  sort( arrA, arrA+n );
  
  int arrB[n];
  
  int i = 0, j = n-1, k = 0;
  
  while( i <= j ){
    if( k%2 == 0 ){
      arrB[k] = arrA[i];
      i++;
    }
    
    if( k%2 != 0 ){
      arrB[k] = arrA[j];
      j--;
    }
    
    cout<<arrB[k]<<endl;
    k++;
  }
 
 
 for( int h = 0; h < n; h++ ) {
   cout<<arrB[h]<<" ";
 }
 
 cout<<endl;
}
