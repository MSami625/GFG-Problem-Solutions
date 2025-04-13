//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        
        vector<int>result;
        
        int p1=0;
        int p2=0;
        
        while(p1<n && p2<m){
            if(a[p1]<=b[p2]){
                result.push_back(a[p1]);
                p1++;
            }else{
                result.push_back(b[p2]);
                p2++;
            }
        }
        
      while(p1<n){
          result.push_back(a[p1]);
          p1++;
      }
      while(p2<m){
          result.push_back(b[p2]);
          p2++;
      }
      
      
      int length=result.size()-1;
      if(length%2!=0){
          int mid=length/2;
          double ans=(result[mid]+result[mid+1])/2.0;
          return ans;
      }else{
          int mid=length/2;
          return result[mid];
      }
      
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends