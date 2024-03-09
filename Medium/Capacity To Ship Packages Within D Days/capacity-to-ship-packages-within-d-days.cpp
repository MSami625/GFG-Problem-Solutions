//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int A[], int N, int D) {
        // code here
        int end=0,start=0;
        int ans=-1;
        
        for(int i=0;i<N;i++){
           start=max(A[i],start);
           end+=A[i];
        }
        
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            int weight=0,count=1;
            
            for(int i=0;i<N;i++){
                weight+=A[i];
                if(weight>mid){
                    count++;
                    weight=A[i];
                }
            }
            
            if(count<=D){
                ans=mid;
                end=mid-1;
            }else{
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
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends