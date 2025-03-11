//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        
        int n=arr.size();
        
        unordered_map<int,int> map;
        
        int prefixSum=0;
        int zeroSumSubArr=0;
        
        map[0]=1;
        
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            
            if(map.find(prefixSum)!=map.end()){
                zeroSumSubArr+=map[prefixSum];
            }
            map[prefixSum]++;
        }
        
        return zeroSumSubArr;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends