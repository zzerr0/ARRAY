#include <iostream>
using namespace std;
int main(){
  
  int arr[7] = { 1,2,3,4,5,10,15};
  
  int x = 25;
  int i = 0;
  int j = 7-1;
  
  while( i != j || j != -1){
    if( arr[i] + arr[j] > x ){
      j--;
    }
    if( arr[i] + arr[j] < x ){
      i++;
    }
    
    if( arr[i] + arr[j] == x ){
      cout<<"Match Found "<<arr[i]<<" & "<<arr[j];
      cout<<endl;
      break;
     }     
  }
  
  cout<<"Finish"<<endl;
  return 0;
}
