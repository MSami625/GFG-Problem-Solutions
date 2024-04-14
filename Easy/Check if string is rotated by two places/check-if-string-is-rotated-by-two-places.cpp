//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
    void rotateclockwise(string &s){
        int lastChar=s[s.size()-1];
        
        for(int i=s.size()-1;i>0;i--){
            s[i]=s[i-1];
        }
        
        s[0]=lastChar;
    }
    
     void rotateanticlockwise(string &s){
        int firstChar=s[0];
        
        for(int i=0;i<s.size()-1;i++){
            s[i]=s[i+1];
        }
        
        s[s.size()-1]=firstChar;
    }
    
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string clockwiserotated=str1;
        rotateclockwise(clockwiserotated);
        rotateclockwise(clockwiserotated);
        
        if(clockwiserotated==str2){
            return true;
        }
        
        
        string anticlockwiserotated=str1;
         rotateanticlockwise(anticlockwiserotated);
         rotateanticlockwise(anticlockwiserotated);
         
         if(anticlockwiserotated==str2){
             return true;
         }
         
        return false;
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends