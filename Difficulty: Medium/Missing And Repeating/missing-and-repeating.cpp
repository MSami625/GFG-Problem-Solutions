//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int> arr) {
        // code here
        vector<int>ans;
        
        long long n=arr.size();
        long long sumN=n*(n+1)/2;
        long long sumArrN=0;
        long long sumArrN2=0;
        long long sumN2=n*(n+1)*(2*n+1)/6;
        
        for(int i=0;i<n;i++){
            sumArrN+=arr[i];
            sumArrN2+=(long long)arr[i]*arr[i];
        }
        
    long long diff1 = sumN - sumArrN; // missing - repeating
    long long diff2 = sumN2 - sumArrN2; // missing^2 - repeating^2
    
    long long sumXY = diff2 / diff1; 
    
    int missing = (diff1 + sumXY) / 2;
    int repeating = missing - diff1;
    
    
    ans.push_back(repeating);
    ans.push_back(missing);
    
    
    return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends