//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i = 0; i < n; i++)
            scanf("%d",&A[i]);
        int key;
        scanf("%d",&key);
        int answer = search(A, 0, n - 1, key); 
        printf("%d\n",answer);
    }
return 0;
}

// } Driver Code Ends


//User function Template for C


    
int search(int A[], int l, int h, int key) { 
    // l: The starting index
    // h: The ending index, you have to search the key in this range
        
    //complete the function here
    int ans=-1;
    
    while(l<=h){
        int mid=l+(h-l)/2;
        
        if(A[mid]==key){
            return mid;
        }else if(A[mid]>=A[0]){
            if(A[l]<=key && A[mid]>=key){
                h=mid-1;
            }else{
                l=mid+1;
            }
           
        }else{
            if(A[mid]<=key && A[h]>=key){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
    }
    return ans;
} 
    
