#include <iostream>
using namespace std;

int binary_search(int *arr, int start, int end, int mid, int x){
 if(arr[mid] == x){
  return mid;
 }
 else
  if(arr[mid] < x){
   start = mid+1;
   mid = (start+end)/2;
   binary_search(arr, start, end, mid, x);
  }
 else
  if(arr[mid] > x){
  end = mid-1;
  mid = (start+end)/2;
  binary_search(arr, start, end, mid, x);
 }

}

int main(){
 int  n = 8;
 int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8};
 int x = 1;
 int start = 0, end = n-1;
 int mid = (start+end)/2;
 int pos = binary_search(arr, start, end, mid, x);
 cout<<"The element is found at index "<<pos<<endl;
 
return 0;
}
