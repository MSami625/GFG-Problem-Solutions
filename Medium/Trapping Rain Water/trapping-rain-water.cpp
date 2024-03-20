//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
    int  leftMax=0, rightMax=0, index=0, maxHeight=arr[0];
        long long waterTrapped=0;
        //LOOP FOR FINDING MAX HEIGHT IN ARRAY;
        
        for(int i=1;i<n;i++){
            if(arr[i]>maxHeight){
                maxHeight=arr[i];
                index=i;
        }
    }
        
        //check left part
        
        for(int i=0;i<index;i++){
            if(leftMax>arr[i]){
                waterTrapped+=leftMax-arr[i];
            }else{
                leftMax=arr[i];
            }
        }
        
        
        //right  part
        for(int i=n-1;i>index;i--){
            if(rightMax>arr[i]){
                waterTrapped+=rightMax-arr[i];
            }else{
                rightMax=arr[i];
            }
        }
        
        return waterTrapped;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends