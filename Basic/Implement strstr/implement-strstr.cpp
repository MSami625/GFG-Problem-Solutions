//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
       int n = s.length();
        int m = x.length();

        
        if (m == 0) {
            return 0;
        }

        
        for (int i = 0; i <= n - m; ++i) {
            int j;
          
            for (j = 0; j < m; ++j) {
                if (s[i + j] != x[j]) {
                    break;
                }
            }
          
            if (j == m) {
                return i;
            }
        }

        // If no match is found, return -1
        return -1;
}