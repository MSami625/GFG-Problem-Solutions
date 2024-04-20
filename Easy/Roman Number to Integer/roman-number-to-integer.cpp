//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
    int num(char c){
        if(c=='I'){
            return 1;
        }else if(c=='V'){
            return 5;
        }else if(c=='X'){
            return 10;
        }else if(c=='L'){
            return 50;
        }else if(c=='C'){
            return 100;
        }else if(c=='D'){
            return 500;
        }else if(c=='M'){
            return 1000;
        }
    }
    
    int romanToDecimal(string &str) {
        // code here
        
        int sum=0 , index=0;
        
        while(index<str.size()-1){
            if(num(str[index])<num(str[index+1])){
                sum-=num(str[index]);
            }else{
                sum+=num(str[index]);
            }
            index++;
        }
        sum+=num(str[index]);
        return sum;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends