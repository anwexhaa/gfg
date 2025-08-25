// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        int n=arr.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int complement=target-arr[i];
            if(mp.find(complement)!=mp.end())
            {
                return {complement, arr[i]};
            }
            mp[arr[i]]=i;
        }
        return {};
    }
};