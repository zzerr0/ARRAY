



//find largest 3 items in array



#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int arr[] = { 1, 10, 11, 9, 5, 4 };
  int k = 3;
  //we want three maximum elemets therefore we've to 
  //create min heap in which min element stays at top
  
  //implementing mean heap with priority queue
  
  priority_queue < int, vector<int>, greater<int>> minh;
  for( int i = 0; i < 6; i++ ){
    minh.push( arr[i]);
    if( minh.size() > k ){
      minh.pop();
    }
  }
  
  while( !minh.empty()){
    cout<<minh.top()<<endl;
    minh.pop();
  }
  
  return 0;
}
