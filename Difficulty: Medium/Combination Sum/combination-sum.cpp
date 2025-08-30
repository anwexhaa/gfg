// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    void backtrack(vector<int> &arr, int target, vector<int>& current, int index, vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(current);
            return;
        }
        for(int i=index;i<arr.size();i++)
        {
            if(arr[i]>target) continue;
            current.push_back(arr[i]);
            backtrack(arr, target-arr[i], current, i, ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        // Your code here
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(arr, target, current, 0, ans);
        return ans;
    }
};