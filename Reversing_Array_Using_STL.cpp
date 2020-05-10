//Reversing Array With STL Function 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> arr{10, 20, 30, 40, 50};
  cout<<"Orignal Array is \n";
  for(int i=0;i<arr.size();i++)
  cout<<arr[i]<<endl;
  //for reversing the array 
  /*    
 vector::rbegin() is a built-in function in C++
 STL which returns a reverse iterator pointing
 to the last element in the container.
 Syntax:
    vector_name.rbegin()
    
 vector::rend() is a built-in function in C++ 
 STL which returns a reverse iterator pointing
 to the theoretical element right before the 
 first element in the array container.
 Syntax:
    vector_name.rend()
 */
 cout<<"Revered array is "<<endl;
 for(auto i=arr.rbegin();i<arr.rend();i++)
 cout<<*i<<endl;
  return 0;
}
