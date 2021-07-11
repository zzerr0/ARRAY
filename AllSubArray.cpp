#include <iostream>
using namespace std;
int main(){
 int n = 10;
 int arr[n] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
 for( int i = 0; i < n; i++){
  for( int j  = i; j < n; j++ ){
   cout<<arr[j]<<" ";
  }
  cout<<endl;
 }
return 0;

}
