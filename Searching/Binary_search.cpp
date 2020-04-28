#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
 int n=5;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cout<<endl;
   cin>>arr[i];
 }
 sort(arr, arr+n);
 
 
 cout<<"\n Enter Element To Search "<<endl;
 int num;
 cin>>num;
 int first=0;
 int last=n-1;
 int middle; 
 middle=(first+last)/2;
 
 while(first<=last)
 {
   if(num>arr[middle])
  {
  first = middle + 1;
  }
   else if(num== arr[middle])
   {
     cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
     break; 
   } 
   else 
   { 
    last = middle - 1; 
   } 
    middle = (first + last)/2; 
 
    if(first > last)
  {
     cout<<num<<" not found in the array";
  }
   

 }
 return 0;
}

