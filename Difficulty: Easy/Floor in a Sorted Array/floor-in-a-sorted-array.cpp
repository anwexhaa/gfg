//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int low=-1;
        int start=0,end=n-1,mid;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(v[mid]==x)
            {
                return mid;
            }
            else if(v[mid]<x)
            {
                start=mid+1;
                low=mid;
            }
            else
            {
                end=mid-1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends