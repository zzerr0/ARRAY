/*
Rearrange an array such that arr[i] = i
Easy Accuracy: 67.09% Submissions: 407 Points: 2

Given an array of size N that has elements ranging from 0 to N-1. All elements may not be present in the array. If the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i, and if i is not present, display -1 at that place.

Example 1:

â€‹Input : arr[ ] = {-1, -1, 6, 1, 9, 3, 2, 
                              -1, 4, -1}
Output : -1 1 2 3 4 -1 6 -1 -1 9
Explanation:
In range 0 to 9, all except 0, 5, 7 and 8 
are present. Hence, we print -1 instead of 
them.

Example 2:

Input : arr[ ] = {0, 1, 2, 3, 4, 5} 
Output : 0 1 2 3 4 5

Your Task:

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function modifyArray() that takes an array (arr), sizeOfArray (n), and return the modified array. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

 

Constraints:
1 ≤ N ≤ 105
0 ≤ A[i] ≤ N-1
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        int * modifyArray(int arr[], int n){
        
        // Complete the function
        set <int> myset;
        for(int i = 0; i < n; i++){
            myset.insert(arr[i]);
        }
        for(int i = 0; i < n; i++){
         if(myset.find(i) != myset.end()){
             arr[i] = i;
         }
         else{
             arr[i] = -1;
         }
        }
        return arr;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        Solution ob;
        int *b;
        b = ob.modifyArray(a, n);
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
        
        cout << endl;
        
    }
    
    return 0;
}
  // } Driver Code Ends
