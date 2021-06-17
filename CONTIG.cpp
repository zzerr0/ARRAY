/*

Check if array contains contiguous integers with duplicates allowed
Easy Accuracy: 62.52% Submissions: 1372 Points: 2

Given an array of n integers(duplicates allowed). Print “Yes” if it is a set of contiguous integers else print “No”.

Example 1:

â€‹Input : arr[ ] = {5, 2, 3, 6, 4, 4, 6, 6}
Output : Yes
Explanation:
The elements  of array form a contiguous 
set of integers which is {2, 3, 4, 5, 6} 
so the output is "Yes".


Example 2:

Input : arr[ ] = {10, 14, 10, 12, 12, 
                              13, 15} 
Output : No



Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function areElementsContiguous() that takes an array (arr), sizeOfArray (n), and return the true if it is a set of contiguous integers else print false. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

// { Driver Code Starts
// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
	// Complete the function
	unordered_set <int> uset;
 		for(int i = 0; i < n; i++){
 		 uset.insert(arr[i]);
 		}
 		
 		int count = 1, curr = arr[0]-1;
 		
 		while(uset.find(curr) != uset.end()){
 		 count++;
 		 curr--;
 		}
 		curr = arr[0] + 1;
 		while(uset.find(curr) != uset.end()){
 		 count++;
 		 curr++;
 		}
 		
 		if(uset.size() ==  count){
 		 return true;
 		}
 		
 		return false;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n + 1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        if (ob.areElementsContiguous(arr, n))
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }
	return 0;
}
  // } Driver Code Ends
