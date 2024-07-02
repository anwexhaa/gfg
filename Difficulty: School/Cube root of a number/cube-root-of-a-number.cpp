//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        if(N<2)
        return N;
        int start=0, end=N, mid,ans;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            double mew=mid*mid;
            if(mid==N/mew)
            {
                ans=mid;
                break;
            }
            else if (mid<N/mew)
            {
                ans=mid;
                start= mid + 1;
            }
            else
            end=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends