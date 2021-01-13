


#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
  int arr[5] = { 10, 20, 60, 30, 57 };
  int max = 0;
  for( int i = 0; i < 5; i++ ){
    if( arr[i] > max ){
      max = arr[i];
    }
  }
  cout<<"The Maximum element is "<<max<<endl;
  int smax = 0;
  for( int i = 0; i < 5; i++ ){
    if( abs( arr[i] - max) < max ){
      smax = arr[i];
    }
    
  }
  
  cout<<"Second Maximum element is "<<smax<<endl;
 return 0;
}
