//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int left=-1;
        int right=-1;
        int start=0,end=n-1,mid;
        vector<int> result(2);
        
        // left part
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                left=mid;
                end=mid-1;
            }else if(arr[mid]>x){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        
        start=0,end=n-1;//important
        
        //right part
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                right=mid;
                start=mid+1;
            }else if(arr[mid]>x){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        result[0]=left;
        result[1]=right;
        
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends