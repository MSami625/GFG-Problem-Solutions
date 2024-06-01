//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        
    vector<int> count(26, 0);

    for(char c : arr) {
        count[c - 'a']++;
    }

    for(int i = 1; i < 26; ++i) {
        count[i] += count[i - 1];
    }

    
    string sorted(arr.length(), ' ');

    for(int i = arr.size() - 1; i >= 0; --i) {
        int pos = --count[arr[i] - 'a'];
        sorted[pos] = arr[i];
    }

    return sorted;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends