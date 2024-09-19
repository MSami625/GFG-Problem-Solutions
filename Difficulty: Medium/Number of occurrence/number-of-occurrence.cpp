//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int nums[], int n, int x) {
	   
	    int first=-1;
        int last=-1;


        int high=n-1;
        int low=0;

        //finding first occurence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                first=mid;
                high=mid-1;
            }else if (nums[mid] < x) {
                low = mid + 1;
            }
            else{
              high=mid-1;
            }
        }


        //finding last occurence
        high=n-1;
        low=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==x){
                last=mid;
             low=mid+1; 
            }
            else if (nums[mid] < x) {
                low = mid + 1;
            }
            else{
              high=mid-1;
            }
        }
        
       if(first == -1) return 0;
       
      return (last-first+1);
        
   
   

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends