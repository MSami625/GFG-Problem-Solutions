//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
 
    int helperfunc(int W,vector<int> &val,vector<int> &wt, int n,vector<vector<int>> &dp){
        if(n==0 || W==0){
            return 0;
        }
        
        if(dp[n][W] != -1){
            return dp[n][W];
        }
        
        int ifIncluded=0;
        if(wt[n-1]<=W){
           ifIncluded=val[n-1]+helperfunc(W-wt[n-1],val,wt,n-1,dp);
        }
           
        int ifExcluded=helperfunc(W,val,wt,n-1,dp);
        
        return dp[n][W]=max(ifIncluded,ifExcluded);
    }
    // Function to return max value that can be put in knapsack of capacity.
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        
      vector<vector<int>> dp(n+1,vector<int>(capacity+1,-1));
        
        return helperfunc(capacity,val,wt,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends