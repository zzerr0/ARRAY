/*

Maximum money
Basic Accuracy: 57.73% Submissions: 13457 Points: 1

Given a street of N houses (a row of houses), each house having K amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.

Example 1:

Input:
N = 5 , K = 10
Output:
30
Explanation:
The Robber can rob from the first, third
and fifth houses which will result in 30.

Example 2:

Input:
N = 2 , K = 12
Output:
12
Explanation:
The Robber can only rob from the first
or second which will result in 12.

Your Task:
You don't need to read input or print anything. Your task is to complete the function maximizeMoney() which takes 2 Integers N and K as input and returns the answer.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N,K <= 103
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        if( N % 2 == 0){
            return (N/2)*K;
        }
        else{
            return ((N/2) + 1) * K;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
