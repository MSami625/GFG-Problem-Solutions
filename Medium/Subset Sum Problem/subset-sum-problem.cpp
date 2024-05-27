//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
         int n = arr.size();

       
        unordered_set<int> subsetSums;
        subsetSums.insert(0); 

     
        for (int i = 0; i < n; ++i) {
       
            unordered_set<int> temp = subsetSums;
            
           
            for (int subsetSum : temp) {
              
                subsetSums.insert(subsetSum + arr[i]);
            }
        }   
        return subsetSums.count(sum) > 0;
    }

    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends