//Kth S M A L L E S T ELEMENT


#include <iostream>
#include <queue>
using namespace std;
int main(){
  
  int n = 6;
  int k = 3;
  int arr[] =  {7, 10, 4, 3, 20, 15};
  priority_queue <int> maxh;
  
  for( int i = 0; i < n; i++ ){
    maxh.push( arr[i] );
    
    if( maxh.size() > k ){
      maxh.pop();
    }
  }
  
  cout<<maxh.top()<<endl;
  return 0;
  
}
