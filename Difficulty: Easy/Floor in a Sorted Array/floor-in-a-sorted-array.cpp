//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int n=arr.size();
        int low=-1;
        int start=0, end=n-1, mid;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]<k)
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
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends