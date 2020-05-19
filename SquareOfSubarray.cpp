#include<iostream>
using namespace std; 

int main()

{
 
  int t;
  cin>>t;
 while(t>0)
 {
  
  int n;
  cin>>n;
  //square of sub array 
  int sq=0;
  int sum=0;  
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  
  for(int i=0;i<n;i++)
  {
    
   for(int j=i;j<n;j++)
   { 
   
    //for calculating sum of subaaray 
     for (int l = i; l <=j; l++)
     {
     sum += arr[l];
     }
      for(int g = 0; g <=sum; g++)
      {
       if(sum == g*g)
       {
          sq++; 
          //if perfect square then increment the number
       }
      }
    }
  }
 cout<<sq<<endl;
 t--;
 }
 
 return 0;  
}
