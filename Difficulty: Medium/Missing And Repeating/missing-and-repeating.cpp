//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int> arr) {
        // code here
        int n=arr.size();
        unordered_map<int, int> freq;
        vector<int> result(2);
        
        for (int num : arr) {
            freq[num]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                result[1] = i;
            } else if (freq[i] == 2) {
                result[0] = i;
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends