#include <iostream>
using namespace std;

//PROGRAM FOR POINTER COMPARSION
int main()
{
 int a = 10;
 int b = 10;
 int *p = 0, *q = 0;
 p = &a;
 q = &b;

 if( p == q ){
  cout<<"POINTERS ARE EQUAL"<<endl;
 }
 else{
  cout<<"POINTERS ARE NOT EQUAL"<<endl;
 }

return 0;
}
