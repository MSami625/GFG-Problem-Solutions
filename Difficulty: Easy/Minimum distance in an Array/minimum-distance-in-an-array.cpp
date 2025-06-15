class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        
        int iofx=-1;
        int iofy=-1;
        int ans=INT_MAX;
        
        
    
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                iofx=i;
                
                if(iofy!=-1){
                    ans=min(ans,abs(iofx-iofy));
                }
            }else if(arr[i]==y){
                iofy=i;
                
                if(iofx!=-1){
                    ans=min(ans,abs(iofx-iofy));
                }
            }
        }
        
        
        
        return ans==INT_MAX?-1:ans;
    }
};