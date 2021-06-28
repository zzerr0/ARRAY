/*

Max distance between same elements
Easy Accuracy: 50.34% Submissions: 21954 Points: 2

Given an array with repeated elements, the task is to find the maximum distance between two occurrences of an element.

Example 1:

Input
n= 6
arr = {1, 1, 2, 2, 2, 1}

Output
5

Explanation
arr[] = {1, 1, 2, 2, 2, 1}
Max Distance: 5
Distance for 1 is: 5-0 = 5
Distance for 2 is : 4-2 = 2
Max Distance 5

Example 2:

Input
n = 12
arr = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}

Output
10

Explanation



arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
Max Distance 10
maximum distance for 2 is 11-1 = 10
maximum distance for 1 is 4-2 = 2
maximum distance for 4 is 10-5 = 5

Your Task:
Complete maxDistance() function which takes both the given array and their size as function arguments and returns the maximum distance between 2 same elemenrs.


Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:

1<=N<=106
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
     set <int> uniqset;
     int distance = 0, maxDistance = INT_MIN ;
     for(int it = 0; it < n; it++){
        uniqset.insert( arr[it] );
     }
    
     for(auto i : uniqset){

        distance = lastOcc( arr, n, i) - firstOcc( arr, n, i);; 
      if( distance > maxDistance ){
         maxDistance = distance;  
        }
      }
     return maxDistance;
    }
    
    int firstOcc(int arr[], int n, int x){
        int fi = 0;
      for( int it = 0; it < n; it++ ){
          if( arr[it] == x ){
              return it;
          }
      }
    }
    
    int lastOcc(int arr[], int n, int x){
        for( int it = n-1; it >= 0; it-- ){
          if( arr[it] == x ){
              return it;
          }
      }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
