









//Find K smallest and largest element in Unsorted array

#include <iostream>
#include <queue>
using namespace std;

void selement( int arr[], int k ){
 priority_queue <int> maxh;
  
  for( int i = 0; i < 6; i++ ){
    maxh.push( arr[i] );
    if( maxh.size() > k ){
      maxh.pop();
    }
  }
  
  cout<<"The "<<k<<"rd smallest element is "
      <<maxh.top()<<endl;
}

void lelement( int arr[], int k ){
  //min heap priority queue
  
  priority_queue < int, vector<int>, greater<int>> minh;
  for( int i = 0; i < 6; i++ ){
    minh.push( arr[i] );
    if( minh.size() > k ){
      minh.pop();
    }
   }
   
  cout<<"The "<<k<<"rd largest element is "
      <<minh.top()<<endl;
}

int main()
{
  //given unsorted array
  int arr[6] = { 7, 10, 4, 3, 20, 15 };
  int k = 3;
  selement( arr, k );
  lelement( arr, k );
  
  //we can find the answer with the help of priority queues
  //by implementing maxheap from priority queue
  
      
 return 0;
}
