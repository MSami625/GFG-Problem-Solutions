//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool helperfunc(vector<int> &arr,int target, int n,vector<vector<int>> &dp){
        if(target==0){
            return true;
        }
        if(n==0){
            return target==arr[0];
        }
        
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        
        bool ifIncluded=false;
        if(target>=arr[n]) {
            ifIncluded=helperfunc(arr,target-arr[n],n-1,dp);
        }
        bool ifExcluded=helperfunc(arr,target,n-1,dp);
        
        return dp[n][target]=ifIncluded || ifExcluded;
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        // code here
        
        int n=arr.size();
        
        vector<vector<int>> dp(n,vector<int> (target+1,-1));
        
        
        return helperfunc(arr,target,n-1,dp);
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends