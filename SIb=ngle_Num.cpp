/*
Given an array Arr of positive integers of size N where every element appears even times except for one. Find that number occuring odd number of times.

Example 1:

Input: 
N = 5
Arr[] = {1, 1, 2, 2, 2}
Output: 2
Explanation: In the given array all
element appear three times except 2
which appears once.

Example 2:

Input: 
N = 7
Arr[] = {8, 8, 7, 7, 6, 6, 1}
Output: 1
Explanation: In the given array all
element appear three times except 20
which appears once.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function getSingle() which takes the array of integers arr[] and n as parameters and returns a integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 107
0 <= Arri <= 108

 
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends

//User function template for C++
class Solution{
public:
	int getSingle(int arr[], int n) {
	    // code here
	    unordered_map <int, int> umap;
	    for(int i = 0; i < n; i++){
	        umap[arr[i]]++;
	    }
	    
	    auto i = umap.begin();
	    for(i : umap){
	        if(i.second % 2 != 0){
	            return i.first;
	        }
	    }
	    
	    return 0;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
