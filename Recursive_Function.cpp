//Recursive function to compute sum of n numbers

#include<iostream>
using namespace std;
int s(int n)
{
  if( n == 0) //if we do not consider 0 case our function will behave
   return 0; //very badly
  else
   return s( n - 1) + n;
}
int main()
{
  int sum ;
  sum = s(10);
  cout<<"Sum is "<<sum<<endl;
  return 0;
}  

/*
  this program works on following principle 
  
  we provide the parameter 3 which is compared with line 
  7 since it is false our control goes to line 10
  
*/
