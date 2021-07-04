/*
Given a positive value N, we need to find the count of numbers smaller than and equal to N such that the difference between the number and sum of its digits is greater than or equal to given specific value K.

Example 1:

Input:
N = 13, K = 2
Output: 4
Explanation: 10, 11, 12 and 13 satisfy the given
condition shown below,
10 – sumofdigit(10) = 9 >= 2
11 – sumofdigit(11) = 9 >= 2
12 – sumofdigit(12) = 9 >= 2
13 – sumofdigit(13) = 9 >= 2  

â€‹Example 2:

Input: 
N = 10, K = 5
Output: 1
Explanation: Only 10 satisfies the given
condition as 10 - sumofdigit(10) = 9 >= 5


Your Task:
You don't need to read input or print anything. Your task is to complete the function numberCount() which takes an integer N and an integer K as inputs and returns the count of numbers less than or equal to N such that the difference between the number and its sum of digits is greater than K.


Expected Time Complexity: Log (N).
Expected Auxiliary Space: O(1).


Constraints:
1 <= N, K <= 109

Topic Tags 
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
        long long int digiSum( int n ){
            long long int  sum = 0, digit = 0;
            while( n > 0 ){
                digit = n % 10;
                sum = sum + digit;
                n = n / 10;
            }
            return sum;
        }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long long int dif = INT_MAX, count = 0;
            
            while( N >= 0 ){
                dif = N - digiSum( N );
                if( dif >= K ){
                    count++;
                }
                N--;
            }
           return count;
        }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends
