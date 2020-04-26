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
}
