#include <iostream>
using namespace std;

void moveneg( int *arr, int size){
 int count = 0, aux[3], j = 0;
 
 for( int i = 0; i < size; i++ ){
  if( arr[i] < 0 ){
   aux[j] = arr[i];
    j++;
  }
  if( arr[i] >= 0 ){
   arr[count++] = arr[i];
  }
 }
 j = 0;
 while(count < size ){
  arr[count++] = aux[j++];
 }
}

int main()
{
 int arr[] = { 1, 4, -4, 6, 0, -3, 2 }, size = sizeof(arr)/sizeof(arr[0]);

 //calling the moveneg for separating -ve

 cout<<endl;
 moveneg( arr, size);
 for( int i = 0; i < size; i++ ){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 
}
