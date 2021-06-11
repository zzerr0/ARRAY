/*

Remove duplicates in small prime array
Easy Accuracy: 48.6% Submissions: 12092 Points: 2

Given an array consisting of only prime numbers, remove all duplicate numbers from it. 

Example 1:

Input:
N = 6
A[] = {2,2,3,3,7,5}
Output: 2 3 7 5
Explanation: After removing the duplicate
2 and 3 we get 2 3 7 5.

Your Task:

Complete the function removeDuplicate() that takes the array of integers and N as input parameters and returns the modified array which has no duplicates. Retain only the first occurrence of the duplicate element. The elements in the returning array should be in the same order as they appear in the original array.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1<=N=106
2<=A[i]<100
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector <int> vec;
        for(int i = 0; i < n; i++){
           if (find(vec.begin(), vec.end(), arr[i]) == vec.end()) {
             vec.push_back(arr[i]); 
            }
            
        }
        //for(auto i : vec )
        return vec;
    
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}
  // } Driver Code Ends
