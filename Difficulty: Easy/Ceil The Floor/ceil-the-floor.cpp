//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int start=0,end=arr.size()-1,mid;
        int ceiling=-1, floor=-1;
        sort(arr.begin(),arr.end());
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                return {x,x};
            }
            else if (arr[mid]<x)
            {
                start=mid+1;
                floor=arr[mid];
            }
            else
            {
                end=mid-1;
                ceiling=arr[mid];
            }
        }
         return {floor, ceiling};
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
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends