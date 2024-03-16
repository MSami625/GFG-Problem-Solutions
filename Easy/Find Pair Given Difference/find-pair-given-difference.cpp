//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
     int start=0,end=1;
     sort(arr,arr+size);
     
     while(end<size){
         if(start!=end && arr[end]-arr[start]==n){
             return true;
         }else if(arr[end]-arr[start]<n){
             end++;
         }else{
             start++;
         }
         
         if(start==end){
             end++;
         }
     }
     
     return false;
    
}