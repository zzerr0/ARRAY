//Kth largest ELEMENT


#include <iostream>
#include <queue>
using namespace std;
int main(){
  
  int n = 6;
  int k = 3;
  int arr[] =  {7, 10, 4, 3, 20, 15};
  priority_queue <int, vector<int>, greater<int> >maxh;
  
  for( int i = 0; i < n; i++ ){
    maxh.push( arr[i] );
    
    if( maxh.size() > k ){
      maxh.pop();
    }
  }
  cout<<"Kth largest elemts is ";
  cout<<maxh.top()<<endl;
  return 0;
  
}
