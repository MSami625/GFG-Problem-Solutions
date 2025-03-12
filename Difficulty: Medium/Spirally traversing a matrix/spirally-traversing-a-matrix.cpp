//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
    vector<int> result;
    
    int n = mat.size(); //rows
    int m = mat[0].size();  //cols

    int top = 0;
    int left = 0;
    int right = m - 1;
    int bottom = n - 1;
    
    while(top<=bottom && left<=right){
        //print top row
        for(int i=left;i<=right;i++){
            result.push_back(mat[top][i]);
        }
        top++;
        
        // print right col
        
        for(int j=top;j<=bottom;j++){
            result.push_back(mat[j][right]);
        }
        right--;
        
        
        // print bottom row
        if(top<=bottom){
        for(int k=right;k>=left;k--){
            result.push_back(mat[bottom][k]);
        }
        bottom--;
        }
        
        
        
        // print left col
        if(left<=right){
        for(int l=bottom;l>=top;l--){
            result.push_back(mat[l][left]);
        }
        left++;
        }
        
    }
    
    return result;
    
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends