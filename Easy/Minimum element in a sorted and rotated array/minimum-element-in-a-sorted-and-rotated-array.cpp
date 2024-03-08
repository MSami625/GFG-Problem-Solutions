//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int start=0;
        int end=n-1;
        
        int ans=arr[0];
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }else{
                ans=arr[mid];
                end=mid-1;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends