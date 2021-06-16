/*

Half N by M
Basic Accuracy: 74.69% Submissions: 3830 Points: 1

Given two values N and M. Give the value when N is halved M-1 times.

Example 1:

Input: N = 100, M = 4
Output: 12
Explaination: The sequence of numbers is 
100, 50, 25, 12.

Example 2:

Input: N = 10, M = 5
Output: 0
Explaination: The sequence is 10, 5, 2, 1 and 0.

Your Task:
You do not need to read input or print anything. Your task is to complete the function mthHalf() which takes N and M as input  parameters and retunrs the value of N when it is halved M-1 times.

Expected Time Complexity: O(log(max(N, M)))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 109
1 ≤ M ≤ 1000
*/
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        for(int i = 0; i < M-1; i++){
            N = N/2;
        }
        return N;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
