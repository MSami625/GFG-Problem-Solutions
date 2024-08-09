//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        vector<long long> ans;
        long long a=A,b=B; //copy values
  
        //GCD
        while(A>0 && B>0){
            if(A>B) A%=B;
            else B%=A;
        }
        
        if(A==0)ans.push_back(B);
        else ans.push_back(A);
        
        
        // LCM
        long long lcm=abs(a*b)/ans.front();
        
        ans.insert(ans.begin(),lcm);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends