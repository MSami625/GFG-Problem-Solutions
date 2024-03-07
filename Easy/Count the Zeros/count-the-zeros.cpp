//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int start=0;
        int end=n-1;
        
        int index=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==1){
                index=mid;
                start=mid+1;
            }else {
                end=mid-1;
            }
        }
        if(index==-1){
            return n;
        }else{
        int ans=n-1-index;
        
        return ans;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends