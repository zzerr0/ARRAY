



#include <iostream>
#include <vector>
#include <queue>
#include <iterator>
using namespace std;
  
int main()
{
  vector <int> v = { 7, -2, 3, 4, 9, -1 };
  int k = v.size()-2;
  
  priority_queue <int> maxh;
  
  vector <int> :: iterator i;
  for( i = v.begin(); i < v.end(); i++ ){
    maxh.push( *i );
    
    if( maxh.size() > k ){
      maxh.pop();
    }
  }
  cout<<"Elements that have at-least two greater elements than themselves."<<endl;
  while( ! maxh.empty() ){
    cout<<maxh.top()<<endl;
    maxh.pop();
  }
  
  return 0;
}
