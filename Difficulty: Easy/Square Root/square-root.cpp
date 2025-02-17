//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
            if (n == 0 || n == 1) return n; // Base cases
    
        int left = 1, right = n, ans = 0;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            
            if (square == n) return mid;   // Perfect square case
            else if (square < n) {         
                ans = mid;  // Store possible answer
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
        }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends