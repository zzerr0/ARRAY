



// Kth smallest absolute difference


#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
  
  vector <int> vec = { 10, 10 };
  vector <int> :: iterator i, j;
  int abs_sum = 0;
  int k = 1;
  priority_queue <int> maxh;
  for( i = vec.begin(); i < vec.end(); i++ ){
    for( j = i+1; j < vec.end(); j++){
      abs_sum = abs(*i - *j);
      maxh.push(abs_sum);
      
      if( maxh.size() > k){
        maxh.pop();
      }
    }
  }
  
  cout<<"The "<<k<<"th smallest absolute "
      <<"difference is "<<maxh.top();
}
