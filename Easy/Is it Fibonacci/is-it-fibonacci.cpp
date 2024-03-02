//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
      long long int sum = 0;
        
        //sum of first window
        for(int i=0; i<K; i++){
            sum += GeekNum[i];
        }
        
        
        //main logic to get the Nth term
        for(int i=K; i<N; i++){
            GeekNum.push_back(sum);
            sum += GeekNum[i] - GeekNum[i-K];
        }
        return GeekNum[GeekNum.size() - 1];

    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends