#include<iostream>
using namespace std;

int swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int *arr, int start, int end)
{
  //to get the right position of pivot
  int pivotindex = start;
  //it can be any element lets say the end element
  int pivot=arr[end];
  for(int i=start;i<end;i++)
  { 
    //runs until.. arr[i]<last element
    if(arr[i]<=pivot)
    { 
     //shifting all the smaller elements than pivot to left
     swap(arr[i],arr[pivotindex]);
     pivotindex++;
    }
  }
  //swapping pivot element to its position
  swap(arr[pivotindex],arr[end]);
 return pivotindex;
}

void quicksort(int *arr, int start, int end)
{ //until it becomes arr[7]
  if(start<end)
  {
  int pindex=partition(arr, start, end);
  //for sorting elements smaller than pivot
  quicksort(arr, start, pindex-1);
  //for sorting elements greater than pivot
  quicksort(arr, pindex+1,end);
  }
  
}
int main()
{  
 int arr[8]={7, 2, 1, 6, 8, 5, 3, 4};
 quicksort(arr, 0, 7);
 for(int i=0;i<8;i++)
 cout<<arr[i]<<endl;
}
