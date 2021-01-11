



#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int arr1[] = { 1, 7, 11 };
  int arr2[] = { 2, 4, 6 };
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);
  int k;
  priority_queue <int> maxheap;
  cout<<"Enter the number of pairs"<<endl;
  cin>>k;
  int sum = 0;
  int min = arr1[0] + arr2[0];
  for( int i = 0; i < n2; i++ ){
    for(int j = 0; j < n1; j++ ){
       sum = arr2[i] + arr1[j];
       maxheap.push(sum);
       
       if( maxheap.size() > k-1 ){
         maxheap.pop();
       }
       
       if( maxheap.top() == sum )
       {
         cout<<"The pair is "
             <<arr1[j]<<" & "<<arr2[i]<<endl;
       }
      }
    }
  
  return 0;


}
