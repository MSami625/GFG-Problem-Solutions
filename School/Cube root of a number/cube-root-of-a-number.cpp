//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        int start=0;
        int end=N;
        
        int ans=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            long long cube=(long long)mid*mid*mid;
            if(cube==N){
                return mid;
            }else if(cube>N){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends