// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int findExtra(int arr[], int brr[], int n) {
        // add code here.
        set <int> myset;
        for(int i = 0; i < n-1; i++){
            myset.insert(brr[i]);
        }
        int key = 0;
        for(int i = 0; i < n; i++){
            key = arr[i];
            if (myset.find(key) == myset.end()) {
                return i;
            }

        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends
