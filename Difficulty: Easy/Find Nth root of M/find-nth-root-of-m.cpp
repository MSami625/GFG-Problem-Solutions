//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	long long root(int n , int mid){
	   long  long ans=1;
	   
	   for (int i = 0; i < n; i++) {
            ans *= mid; 
            if (ans > LONG_LONG_MAX / mid) {
                return LONG_LONG_MAX; 
            }
        }
	   
	   return ans;
	}
	
	
	int NthRoot(int n, int m)
	{
	    // Code here.
	    
	    int low=1;
	    int high=m;
	    
	    while(low<=high){
	        int mid=(low+high)/2;
	        
	       long long midN=root(n,mid);
	        if(midN==m){
	            return mid;
	        }else if(midN>m){
	            high=mid-1;
	        }else{
	            low=mid+1;
	        }
	    }
	    
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends