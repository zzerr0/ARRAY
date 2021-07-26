// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        // Code here.
        int low = 0, high = arr.size() - 1, mid = 0;
        while( low <= high ){
            mid = low + (high - low) / 2;
            //cout<<"Mid is "<<mid<<endl;
            if( mid > 0 && mid < arr.size()-1 ){
                if( arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]){
                     return arr[mid];
                }
                else
                 if( arr[mid-1] > arr[mid]){
                     high = mid-1;
                 }
                else{
                    low = mid+1;
                }
            }
            else
             if( mid == 0){
                 if( arr[0] > arr[1]){
                     return arr[0];
                 }
                 else{
                     return arr[1];
                }
            }
            else
             if( mid == arr.size()-1){
                 if( arr[arr.size()-1] > arr[arr.size()-2]){
                     return arr[arr.size()-1];
                 }
                 else{
                     return arr[arr.size()-2];
                }
            }
            
        }
    }
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends
