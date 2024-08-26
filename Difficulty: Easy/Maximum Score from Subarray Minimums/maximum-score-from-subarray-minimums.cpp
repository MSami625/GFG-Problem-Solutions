//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        
        // kadanes algo
        
       int sum = arr[0];
        int maxi = INT_MIN;
        
        for(int i = 1; i < arr.size(); i++)
        {
            sum += arr[i];
            maxi = max(sum, maxi);
            sum -= arr[i-1];
        }
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends