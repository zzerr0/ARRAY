#include<iostream>
using namespace std; 
/* 
  int perfect_square(int n)
{
    int sqr=1;
    int counter=1;
    for(int i=1; sqr>=n; i++)
    {
        sqr = i*i;
        counter++;
    }
    if(sqr==n)
    {
        return '1';
    }
    else
    {
        return '2';
    }
}
*/
int main()
{
  int arr[]={10, 20, 30, 40, 50 };
  int n=sizeof(arr)/sizeof(arr[0]);
  int c=0;
  
  for(int i=0;i<n;i++)
  {
    
   for(int j=i;j<n;j++)
   { 
    int sum=0;
       for(int k=i;k<=j;k++)
       {
        cout<<arr[k]<<endl;  
       } 
       
    //for calculating sum of subaaray 
    for (int l = i; l <=j; l++)
    {
     sum += arr[l];
    }
    //for calculating serial of subarray
    c++;
    cout<<"Subarray "<<c<<endl;
    //for showing sum of subaaray
    cout<<"Sum = "<<sum<<endl;
    cout<<endl;
   }
 
 }
  cout<<"No. of total sub array is "<<c<<endl;
 return 0;  
}
