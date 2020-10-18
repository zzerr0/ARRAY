#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;

int main()
{
  int n, q;
  int index, value, col, size;
  //creating a 2d vector
  vector < vector<int> > n_vector;
  cin>>n>>q;
  
  for( int i = 0; i < n; i++){
    vector <int> i_vector;
    cin>>size;
    for( int j = 0; j < size; j++ ){
      cin>>value;
      i_vector.push_back(value);
    }
    n_vector.push_back(i_vector);
  }
  
  for( int i = 0; i < q; i++ ){
    cin>>col>>index;
    cout<<n_vector[col][index]<<endl;
  }
  
  return 0;
}
