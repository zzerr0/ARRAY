#include <iostream>
#include <vector>
using namespace std;

int main()
{
 //we are using range function to overcome the iterations
 
 vector<int> v = { 1, 2, 3, 4, 5, 6 };
 int arr[] = { 10, 11, 12, 13, 14, 15 };
 
 //using range fuction to display vector elements
 for( auto i : v ){
  cout<<i<<" ";
 }
 cout<<endl;
 //using range fuction to display array elements
 for( int i : arr ){
  cout<<i<<" ";
 }
cout<<endl;
return 0;
}
