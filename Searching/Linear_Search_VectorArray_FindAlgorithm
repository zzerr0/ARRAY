#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//time complexity of linear search is O(n)

int main()
{
  vector<int> vec { 10, 20, 30, 40 }; 
      
   // Iterator used to store the position  
    vector<int>::iterator it;
      
    // Element to be searched 
    int ser = 30; 
      
    // find function call 
    it = find (vec.begin(), vec.end(), ser); 
    if (it != vec.end()) 
    { 
     cout << "Element " << ser <<" found at position : " ; 
     cout<<endl;
     cout << it - vec.begin() << " (counting from zero) \n" ; 
    } 
    else
     cout << "Element not found";
           
  return 0;
}
