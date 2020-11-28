#include <iostream>
using namespace std;


int main()
{
  int n = 9;
  int arr[n] = { 12, 11, -13, -5, 6, 7, 5, -3, -6};
  int i = 0, j = 0;
  int temp = 0;
  
  cout<<"----- O R I G N A L  A R R A Y ----- "<<endl;
  cout<<endl;
  for( int k = 0; k < n; k++ ){
    cout<<arr[k]<<" ";
  }
  cout<<endl;
  
  while( j < n ){
    
    if( arr[i] >= 0 && arr[j] < 0 ){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      
      i++;
      j++;
    }
    
    else{
      j++;
    }
  }
  
  cout<<"----- E D I T E D  A R R A Y -----"<<endl;
  cout<<endl;
  for( int k = 0; k < n; k++ ){
    cout<<arr[k]<<" ";
  }
  
  cout<<endl;
  return 0;
}
