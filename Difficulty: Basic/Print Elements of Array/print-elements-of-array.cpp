//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    int i=0;
    void printArray(vector<int> &arr) {
        // code here
        if(i >arr.size()-1){
            return;
        }
        
        cout<<arr[i]<<" ";
        i++;
        
        printArray(arr);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.printArray(arr);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends