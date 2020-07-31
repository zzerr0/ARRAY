/*
#include <iostream>
using namespace std;

//time complexity of linear search is O(n)
void linear(int *arr, int n, int el)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==el)
    {
    cout<<el<<" is found at location "<<i+1;
    cout<<endl;
    }
  }
  
}

int main()
{
  int arr[]={10,60,80,89, 34,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  int el=34;
  linear(arr, n, el);
  return 0;
}*/

#include<iostream>
using namespace std;

int linearsearch( int *array, int sizeofarray, int tofind)
{
 for(int i = 0; i < sizeofarray; i++) 
 {
   if( array[i] == tofind)
   cout<<"Element Found At Index "<<i<<endl;
 }
 cout<<"Finished!"<<endl;
}

int main()
{
  
  cout<<"Enter The Size Of The Array "<<endl;
  int sizeofarray;
  cin>>sizeofarray;
  
  cout<<"Enter The Array Elements "<<endl;
  int array[sizeofarray];
  for(int i = 0; i < sizeofarray; i++)
  {
    cin>>array[i];
  }
  
  cout<<"Enter The Number To Search For"<<endl;
  int tofind;
  cin>>tofind;
  
  //calling function to perform linear search
  linearsearch(array, sizeofarray, tofind);
  
  return 0;
}


