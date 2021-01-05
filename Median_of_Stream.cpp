



#include <iostream>
using namespace std;
int main()
{
  cout<<"How many Elements Do you want to enter"<<endl;
  int n;
  cin>>n;
  
  int arr[n], count = 1;
  int mid ;
  float median = 0;
  for(int i = 0; i < n; i++ ){
    cout<<"Enter"<<endl;
    cin>>arr[i];
    if( count % 2 == 0 ){
      mid = (count/2) ;
      median = float (arr[mid] + arr[mid-1]) / 2;
      cout<<"median is "<<median<<endl; 
    }
    
    else{
      mid = count/2;
      median = arr[mid];
      cout<<"Median is "<<median<<endl;
    }
    count++;
  }
}
