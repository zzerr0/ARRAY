/*

Consecutive Array Elements
Easy Accuracy: 42.33% Submissions: 873 Points: 2

Given an unsorted array arr[] of size N, the task is to check whether the array consists of consecutive numbers or not.

Example 1:

Input: N = 5, arr[] = {5, 4, 2, 1, 3}
Output: Yes
Explanation: All are consecutive elements,
according to this order 1,2,3,4 and 5.

Example 2:

Input: N = 6, arr[] = {2, 1, 0, -3, -1, -2}
Output: Yes


Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function areConsecutives() that takes array arr[] and integer N as parameters and returns the boolean true if array elements are consecutive else boolean false.

Note: If the elements are consecutive driver code outputs Yes otherwise, it outputs No

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).


Constraints:
1 ≤ N ≤ 107
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	
	
	public:
	bool areConsecutives(long long arr[], int n) 
	{ 
	    // Your code goes here
	    unordered_set <int> uset;
	    int min = INT_MAX, max = INT_MIN;
	    for(int i = 0; i < n; i++){
	     uset.insert(arr[i]);
	     if(arr[i] > max){
	         max = arr[i];
	     }
	     if(arr[i] < min){
	         min = arr[i];
	     }
	    }
	    
	    if( n == (max - min) + 1 && uset.size() == n){
	        return true;
	    }
	    else{
	        return false;
	    }
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
	    long long a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       
        Solution ob;
        if(ob.areConsecutives(a, n) == true)
	        cout<<"Yes";
	    else
	        cout<<"No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
