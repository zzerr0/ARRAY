//selection sort
#include<iostream>
using namespace std;
class ss
{ 
  public:
  //declaring data type one for size and one for array 
  void sort(int, int[]);
  //passing array as pointer semantics 
  void display(int,int*);
   
};

void ss::sort(int n, int arr[])
{
  for(int i=0;i<n-1;i++)
  { int min;
    min=i;
    for(int j=i+1;j<n;j++)
    {
      /*this loop will run 5 times and will find
      minimum element */
      if(arr[j]<arr[min])
      min=j;
    }
    //swapping the minimum element.. with left most
    int tmp=arr[i];
    arr[i]=arr[min];
    arr[min]=tmp;
  }
}


void ss:: display(int n, int *arr)
{
  //displaying the sorted array 
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
    cout<<endl;
  }
   
}
int main()
{
  ss obj;
  cout<<"Enter Size of Array "<<endl;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  obj.sort(n, arr);
  obj.display(n, arr);
  return 0;
}
