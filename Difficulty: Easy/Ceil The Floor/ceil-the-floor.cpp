//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int k, vector<int> &arr) {
        // code here
        int n=arr.size();
        int start=0, end=n-1, mid, low=-1, high=-1;
        sort(arr.begin(),arr.end());
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==k)
            {
                return {k,k};
            }
            else if(arr[mid]<k)
            {
                start=mid+1;
                low=arr[mid];
            }
            else
            {
                end=mid-1;
                high=arr[mid];
            }
        }
        return {low,high};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends