#include<iostream>
using namespace std;
int main()
{
  int a[]={1, 3, 4, 5};
  int b[]={2, 4, 6, 8};
  int n=sizeof(a)/sizeof(a[0]);
  int N=n*2;
  int answer[N];
  int i=0; //for array 1
  int j=0; //for array 2
  int k=0; //for array 3


//two varibles for keeping the pointer if values in
//in two arryay while comparing them
 while (i < n && j < n)
    {
        if (a[i] < b[j])
        {
            answer[k] = a[i];
            i++;
        }
        else
        {
            answer[k] = b[j];
            j++;
        }
        k++;
    }
   
 
//these loops are usee to copy the left over elements
//into the array 
while (i < n)
    {
        answer[k] = a[i];
        i++;
        k++;
    }
while (j < n)
    {
        answer[k] = b[j];
        j++;
        k++;
    }
  
   
  
  for(int l=0;l<N;l++)
  {
    cout<<answer[l]<<endl;
  }
  return 0;
}
