#include <iostream>
using namespace std;
class RevereseSorted {
 public :
  void findElement(int arr[], int n, int x){
   int low = 0, high = n-1, mid = 0;
   while( low <= high ){
     
    if( arr[mid] == x){
     cout<<"Element found at "<<mid<<endl;
     break;
    }
    else
     if( x > arr[mid]  ){
      high = mid - 1;
     }
    else
    if( x < arr[mid]  ){
      low = mid + 1;
     }
     
     mid = low + ( high - low )/2;
   }
   //when element not found

  
  }

};


int main(){
 cout<<"Enter the size of the array "<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter elements in desceneding order"<<endl;
 for( int i = 0; i < n; i++){
  cin>>arr[i];
 }
 cout<<"Enter the element to search "<<endl;
 int x;
 cin>>x;
 //creating object
 RevereseSorted obj;
  obj.findElement( arr, n, x);
 /*if( ){
  cout<<"Element Found "<<endl;
 }
 else{
  cout<<"Element not found"<<endl;
 }*/
 
 return 0;
}
