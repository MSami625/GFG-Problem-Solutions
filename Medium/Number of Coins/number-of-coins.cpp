//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here
	    
	  vector<int> dp(V + 1, INT_MAX);

        // Base case: 0 coins needed to make change for 0 cents
        dp[0] = 0;

        // Iterate through each coin
        for (int i = 0; i < coins.size(); ++i) {
            // For each coin, update dp array for values from coins[i] to V
            for (int j = coins[i]; j <= V; ++j) {
                // Choose minimum between current value of dp[j] and 1 + dp[j - coins[i]]
                if (dp[j - coins[i]] != INT_MAX) {
                    dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
                }
            }
        }

        // If dp[V] is still INT_MAX, it means change for V cents is not possible
        if (dp[V] == INT_MAX) {
            return -1;
        }

        // Otherwise, return the minimum number of coins needed for V cents
        return dp[V];
	} 
	  
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends