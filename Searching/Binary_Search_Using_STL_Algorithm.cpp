#include<iostream>
#include<algorithm>
using namespace std;
//Traversing through array
void show(int a[], int arraysize) 
{ 

    for (int i = 0; i < arraysize; ++i) 

        cout << a[i] << " "; 
} 

int main()
{
  int n ; 
  cin>>n;
  int arr[n];
  //Taking Input Of Elements 
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //Sorting The array using STL
  sort(arr, arr+n);
  cout<<"\n Sorted Array is "<<endl;
  show(arr, n);
  
  cout<<"Enter the Element to search "<<endl;
  int el;
  cin>>el;
 
 
 //performing Binary Search using STL
  if(binary_search(arr, arr+n,el))
  {
    cout<<"Element Found at "<<endl;
  }
  else
  {
    cout<<"Element Not Found"<<endl;
  }
  return 0;
}
