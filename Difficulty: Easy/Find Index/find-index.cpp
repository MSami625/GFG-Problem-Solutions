//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        vector<int>ans(2,-1);
        return find(arr,ans,key,0);
        return ans;

        
    }
    
    vector<int> find(vector<int>& arr,vector<int>& ans,int key,int i){
         if(i>=arr.size()){
             return ans;
         }
         
         if(arr[i]==key){
             if(ans[0]==-1){
                 ans[0]=i;
                 ans[1]=i;
             }else{
                 ans[1]=i;
             }
         }
         
         return find(arr,ans,key,i+1);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> res;
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        res = ob.findIndex(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends