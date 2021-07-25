// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> arr)
    {
        // Your code goes here 
        int n = arr.size();
        int  l = 0, r = n-1, temp = 0;
        while( l < r ){
           if( arr[l] == 0 && arr[r] == 1){
               l++;
               r--;
           }
           else
           if( arr[l] == 0 && arr[r] == 0){
               l++;
               
           }
           else
           if( arr[l] == 1 && arr[r] == 0){
               temp = arr[l];
               arr[l] = arr[r];
               arr[r] = temp;
               l++;
               r--;
           }
           else{ //( arr[l] == 1 && arr[r] == 1)
               r--;
               
           }
        }
        
        return arr;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	    Solution ob;  
	  	vector<int> result = ob.SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
