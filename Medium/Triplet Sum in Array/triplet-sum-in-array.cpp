//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        
        //sort the array;
        
        sort(A,A+n);
        
        int ans;
        for(int i=0;i<n-2;i++){
            ans=X-A[i];
            int start=i+1;
            int end=n-1;
            
        
            while(start<end){
                if(A[start]+A[end]==ans){
                    return 1;
                }else if(A[start]+A[end]>ans){
                    end--;
                }else{
                    start++;
                }
            }
            
        }
            
            return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends