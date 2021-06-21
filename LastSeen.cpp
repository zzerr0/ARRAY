/*

Last seen array element
Easy Accuracy: 66.15% Submissions: 608 Points: 2

Given an array arr of N integers that might contain duplicates, find the element whose last appearance is earliest.
 

Example 1:

Input : arr[] = {10, 30, 20, 10, 20}
Output : 30
Explanation:
Below are indexes of last
appearances of all elements (0 based
indexes). 10 last occurs at index 3
30 last occurs at index 1. 20 last
occurs at index 2 The element whose
last appearance earliest is 30.

 

Example 2:

Input : arr[] = {10, 20, 30, 40, 10}
Output : 20

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function lastSeenElement() that takes an array (arr), sizeOfArray (n), and returns the element whose last appearance is earliest. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1<=N<=105
1<=arr[i]<=106
 
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


class Solution{
    public:
    int lastSeenElement(int arr[], int n)
    {
        // Complete the function
        unordered_map <int, int> umap;
        for(int i = 0; i < n; i++){
            auto key = umap.find(arr[i]); 
            if( key != umap.end()){
                key->second = i;
            }
            else{
            umap.insert({arr[i], i});
            }
        }
        int lastIndex = INT_MAX;
        int lastElement = 0;
        for(auto i : umap){
            //cout<<i.first<<" : "<<i.second<<endl;
             if( i.second < lastIndex ){
                lastIndex = i.second;
                lastElement = i.first;
            }
        }
        
        return lastElement;
    }
 
};

// { Driver Code Starts.

 
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin >> a[i];
    Solution ob;
    cout << ob.lastSeenElement(a, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
