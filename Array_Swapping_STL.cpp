//Swapping Two Arrays Of Same Data Type 
//Using Swap Function Of STL
#include <iostream>
#include<array>
using namespace std;

//Deque Class
//Elements can be inserted at front & top
int main()
{
 array<int,5> array1{10, 20, 30, 40, 50};
 array<int, 5> array2{100, 200, 300, 400, 500};
 
 cout<<"ARRAY 1 is \n";
 for(int i=0;i<array1.size();i++)
 {
   cout<<array1[i]<<endl;
 }
 
 cout<<"ARRAY 2 is \n";
 for(int i=0;i<array2.size();i++)
 {
   cout<<array2[i]<<endl;
 }
 
 array1.swap(array2);
 
 cout<<"\n AFTER SWAPPING THE ARRAY \n";
 cout<<"\n ARRAY 1 is \n";
 for(int i=0;i<array1.size();i++)
 {
   cout<<array1[i]<<endl;
 }
 
 cout<<"ARRAY 2 is \n";
 for(int i=0;i<array2.size();i++)
 {
   cout<<array2[i]<<endl;
 }
 
  return 0;
}
