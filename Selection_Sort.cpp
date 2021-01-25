


// B U B B L E   S O R T
#include <iostream>
using namespace std;
int main()
{
 int n = 6;
 int arr[n] = { 1, 9, 7, 5, 10, 9};
 int nop = 0;
 cout<<"Un sorted array is "<<endl;
 for( int i = 0; i < n; i++ ){
   cout<<arr[i]<<" ";
 }
 
 cout<<endl;
 int min = 0,temp = 0;
 
 //  S E L E C T I O N   S O R T
 for( int i = 0; i < n-1; i++)
 {
   nop++;
   min = i;
   for( int j = i+1; j < n; j++ ){
     nop++;
     if(arr[j] < arr[min]){
       min = j;
     }
   }//end of nested loop
   
   if( min  != i ){
     temp = arr[i];
     arr[i] = arr[min];
     arr[min] = temp;
   }
   
 }
 
 
 
 
 
 
 cout<<"Sorted array is "<<endl;
 for( int i = 0; i < n; i++ ){
   cout<<arr[i]<<" ";
 }
 cout<<endl;
 
 cout<<"It took number of passes = "<<nop<<endl;
 
 return 0;
 
}
