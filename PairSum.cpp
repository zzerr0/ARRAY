// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int  l = 0,  r = n-1, count = 0;
        sort(arr, arr+n);
        while(l <= r){
        cout<<"Inside while"<<endl;
            if(arr[l] + arr[r] == k){
                count++;
                l++;
            }
            if(arr[l] + arr[r] > k){
                r--;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cout<<"Enter T"<<endl;
    cin >> t;
    while (t--) {
        int n, k;
        cout<<"N and K"<<endl;
        cin >> n >> k;
        int arr[n];
        cout<<"Arr"<<endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout<<"Outside for loop"<<endl;
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
