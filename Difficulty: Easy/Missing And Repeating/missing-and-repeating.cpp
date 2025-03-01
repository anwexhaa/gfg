//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& nums) {
        // code here
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        //repeating
        int repeating = -1;
        // Find repeating number
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                repeating = nums[i];
                ans.push_back(repeating);
                break; // Stop after finding the repeating number
            }
        }

        // Find missing number using sum formula
        long long expectedSum = 1LL * n * (n + 1) / 2;
        long long actualSum = accumulate(nums.begin(), nums.end(), 0LL);
        long long missing = expectedSum - (actualSum - repeating);

        ans.push_back(missing);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends