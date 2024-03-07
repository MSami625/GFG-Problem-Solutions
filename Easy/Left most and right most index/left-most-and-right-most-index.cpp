//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long,long> ans;
        
        int start=0,end=v.size()-1;
        
        //search left
        int left=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(v[mid]==x){
                left=mid;
                end=mid-1;
            }else if(v[mid]>x){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        //search right
        
        start=0, end=v.size()-1;
        
        
        int right=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(v[mid]==x){
                right=mid;
                start=mid+1;
            }else if(v[mid]>x){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        
        ans.first=left;
        ans.second=right;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends