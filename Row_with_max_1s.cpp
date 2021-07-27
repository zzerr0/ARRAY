// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxRow = -1;
	    
	    int NumberOfOne = 0, most1Row = -1;
	    for( int i = 0; i < n; i++ ){
	        NumberOfOne = NO1( arr[i], m );
	       //cout<<" most1Row "<<most1Row<<endl;
	       if( NumberOfOne > 0 ){
	        if( NumberOfOne > maxRow){
	            maxRow = NumberOfOne;
	            most1Row = i;
	        } 
	        }
	    }
	    
	   return most1Row; 
	    
	}
	
	
    int NO1( vector<int> arr, int n){
       int index = -1;
       for( int i = 0; i < n; i++){
           if( arr[i] == 1){
               index = i;
               break;
           }
         //cout<<"index "<<index<<endl;
          
       }
       if( index > -1)
        return n-index;
        else{
            return 0;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
