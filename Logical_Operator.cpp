



#include <iostream>
using namespace std;
int main()
{
  int i = 0, j = 0, k = 9, a, b, c;
  a = i || j || k;
  b = i && j && k;
  c = i || j && k;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
}
