// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long arrA[], long long arrB[],  
                 int n, int m) 
	{ 
	    // Your code goes here
	    set <long long> myset;
	    vector <long long> vec;
	    for(int i = 0; i < m; i++){
	        myset.insert(arrB[i]);
	    }
	    long long key = 0;
	    for( int i = 0; i < n; i++ ){
	        key = arrA[i];
	        if( myset.find(key) == myset.end()){
	            vec.push_back(key);
	        }
	      
	    }
	    
	    return vec;
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
