


#include <iostream> 
#include <cmath>
#include <queue>
using namespace std;
int main()
{
  // we can implement min heap to find 2nd maximum element
  int n = 10000000;
  int arr[n];
  for(int i = 0; i < n; i++ ){
    arr[i] = i;
    cout<<arr[i]<<endl;
  }
  int k = 2;
  priority_queue <int, vector<int>, greater<int> > minh;
  for( int i = 0; i < n; i++ ){
    minh.push(arr[i]);
    if( minh.size() > k ){
      minh.pop();
    }
  }
  
  cout<<"Second Maximum element is "<<minh.top();
  cout<<endl;
 return 0;
}
