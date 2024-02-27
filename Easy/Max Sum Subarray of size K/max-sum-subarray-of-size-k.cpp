//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
         //using sliding window technique
      
          long window_sum=0;
          long max_sum=0;
          
        
          
          //getting sum of first k elements as window sum.
          for(int i=0;i<K;i++){
              window_sum+=Arr[i];
          }
          
          //now loop linearly till n from k and add the current element to window and subtract prev.
          max_sum=window_sum;
          
          for(int i=K;i<N;i++){
            window_sum+=Arr[i]-Arr[i-K];
         
            if(max_sum<window_sum){
              max_sum=window_sum;
          }
          
        }
          return max_sum;
         
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends