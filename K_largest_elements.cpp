

//priority queue as maxheap or minheap
//find k largest element in the array

#include <iostream>
#include <queue>
using namespace std;
int main()
{
 //for finding the largest element we've to implement 
 //min heap 
 
 int arr[7] = { 10, 30, 20, 50, 40, 70, 60};
 priority_queue < int, vector<int>, greater<int> > minh;
 
 for( int i = 0; i < 7; i++ ){
   minh.push( arr[i]);
   
   //for removing the min elements
   if( minh.size() > 3 ){
     minh.pop();
   }
 }
 
 while( ! minh.empty() ){
   cout<<" "<<minh.top()<<endl;
   minh.pop();
 }
 return 0;
 
 
}
