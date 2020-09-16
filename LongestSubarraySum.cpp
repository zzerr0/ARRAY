#include<iostream>
using namespace std;

int lngsub( int arr[], int n, int pos, int s ){

 cout<<" n = "<<n<<" pos = "<<pos<<" s = "<<s<<endl;
 int count = pos-1 , sum = 0;
 cout<<"count is "<<count<<endl;
 for( int i = pos; i<n; i++ ){
   cout<<" ----- "<<endl;
  sum = arr[i] + sum;
  count++;
  if( sum == s){
   cout<<" From position "<<pos<<" to "<<count<<endl;
   cout<<" count is "<<count<<endl;
   return count;
  } 
 }
}

int main()
{
 cout<<"Enter the array size"<<endl;
 int n, x = 12;
 cin>>n;
 int arr[n];
 cout<<"Enter the elemts"<<endl;
 for(int i=0; i<n; i++){
  cin>>arr[i]; 
 }
/*
 for(int i=0; i<n; i++){
  cout<<arr[i]<<" "; 
 }
cout<<endl;
*/
 cout<<"Going to check "<<endl;
int max = 0, call = 0;
//calling the lngsub function to find the longest subarray
 for( int i=0; i<n; i++){
   if( max <= call){
  max = lngsub( arr, n, i, x );
  cout<<i<<" "<<max<<endl;
  }
}
return 0;
}
