#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int n=6;
  int arr[n]={10, 20, 30, 40, 50};
  int pos;
  cout<<"\n Enter position from data"
      <<"where data has to be deleted"<<endl;
  cin>>pos;
  for(int i=pos;i<n;i++)
  {
    arr[i-1]=arr[i];
  }
  
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}
