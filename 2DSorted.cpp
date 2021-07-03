#include <iostream>
#include <vector>
using namespace std;

class SortedRowCol {
 public :
  vector <int> findElement( int arr[4][4], int n, int x ){
   int i = 0, j = n-1, m = n;
   vector <int > v;
   while( i >= 0 && i < n && j >= 0 && j < m ){
    if( arr[i][j] == x ){
     v.push_back(i);
     v.push_back(j);
     return v;
    }
    
    else
     if( arr[i][j] > x ){
      j--;
     }
    else{
    i++;
    }
   
   }
   
   return v;
  
  }
};

int main()
{
 int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
  SortedRowCol obj;                    
    vector <int> myvec = obj.findElement(mat, 4, 29);
    cout<<"Element found at index "<<" ";
    for( auto i : myvec ){
     cout<<"["<<i<<"]"<<" ";
    }
    
    cout<<endl;
return 0;
}
