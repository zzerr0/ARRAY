#include <iostream>
#include <cstdlib>
using namespace std;

void array_rotation(int *arr, int d, int n){
 int auxarr[d];
 for(int i = 0; i < d; i++){
  auxarr[i] = arr[i];
 }
 for(int i=d; i<n; i++){
  arr[abs(i-d)] = arr[i];
 }
 for(int i=d; i>0; i--){
  arr[n-i] = auxarr[d-i];
 }

}

int main(){

 int n = 0, d = 0;
 cout<<"Enter N and D"<<endl;
 cin>>n>>d;
 int arr[n];
 cout<<"Enter the array elements"<<endl;
 for(int i = 0; i < n; i++){
 cin>>arr[i];
 }
 
 array_rotation(arr, d, n);
 cout<<"The rotated array is "<<endl;
 for(int i = 0; i < n; i++){
 cout<<arr[i];
 }
 cout<<endl;
return 0;
}
