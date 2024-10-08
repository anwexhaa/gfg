//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int counting(int mid,vector<vector<int>>matrix, int R , int C ) {
        int count=0;
        for(int i=0;i<R;i++) {
            auto it = upper_bound(matrix[i].begin(), matrix[i].end(), mid);
            count += it-matrix[i].begin();
        }
        return count;
    }
     int median(vector<vector<int>> &matrix, int R, int C){
        int low = INT_MAX, high = INT_MIN;
        for(int i=0;i<R;i++) {
            low = min(low,matrix[i][0]);
            high = max(high, matrix[i][C-1]);
        }
        int req = (R*C)/2;
        while(low <= high) {
            int mid = low+(high-low)/2;
            int smallEq = counting(mid,matrix,R,C);
            if(smallEq<=req) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends