//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>


// } Driver Code Ends
// User function Template for C

long long int floorSqrt(long long int n) {
    // Your code goes here
    
    long long ans=-1;
    
    long long low=0;
    long long high=n;
    
    while(low<=high){
        long long mid=(low+high)/2;
        
        if(mid*mid == n){
            return mid;
        }else if(mid*mid>n){
            high=mid-1;
        }else{
            low=mid+1;
            ans=mid;
        }
    }
    
    return ans;
}

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%ld", &n);

        printf("%ld\n", floorSqrt(n));
    }
    return 0;
}

// } Driver Code Ends