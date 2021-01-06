// perform product in k minimum elements



#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int n = 6, arr[n] = { 198, 76, 544,123,154,675 };
  int k = 2, product = 1 ;
  priority_queue <int, vector<int>, greater<int>> minh;
  for( int i = 0; i < n; i++ ){
    minh.push( arr[i] );
  }
   
  while( k > 0){
    product = product * minh.top();
    minh.pop();
    k--;
  }
  
  cout<<"The product of "<<2<<" minimum element"
      <<" is "<<product;
      
      return 0;
}
