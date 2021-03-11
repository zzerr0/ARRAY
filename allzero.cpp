#include<iostream>
using namespace std;

int movezero(int *arr, int size){
 int count = 0;

cout<<endl;
 for(int i = 0; i < size; i++ ){
  if(arr[i] != 0 ){
    arr[count++] = arr[i];
  }
 }

 //assigning all the left over index to zero
 while(count < size ){
  //The below assignment can be wrotten in two ways
  //1
  arr[count++] = 0;
  //2
  /*
  arr[count] = 0;
  count++;
  */
 }
}

int main()
{
 int arr[] = {1, 0, 3, 0, 9, 10, 12, 0, 45 },size = sizeof(arr)/sizeof(arr[0]);
 cout<<size<<endl;
 
 //function to move all elements at the end of the zero
 movezero(arr,size);
 for(int i = 0; i < size; i++ ){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 return 0;
}

