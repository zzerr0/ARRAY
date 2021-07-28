// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int> &arr, int k) {
        // Code here
       vector <int> vec;
       unordered_map <int, int> umap;
       for( int i = 0; i < arr.size(); i++){
           umap[arr[i]]++;
       }
       priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
       for( auto i : umap ){
           pq.push({ i.second, i.first });
           if( pq.size() > k){
               pq.pop();
           }
       }
       
       while( !pq.empty()){
           vec.push_back( pq.top().second );
           pq.pop();
       }
       reverse(vec.begin(), vec.end());
     return vec;       
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
