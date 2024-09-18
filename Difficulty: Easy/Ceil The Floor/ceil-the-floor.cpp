//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
       
    int floornum=-1, ceilnum=-1;
        
    //   /to find floor
         
    for (int num : arr) {
        if (num <= x) {
          if (floornum == -1 || num > floornum) {
            floornum = num;
        }
      }
        
        // /to find ceil
     
       if (num >= x) {
        if (ceilnum == -1 || num < ceilnum) {
          ceilnum = num;
        }
      }
    }
        
         
     return {floornum,ceilnum};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends