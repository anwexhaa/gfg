class Solution {
  public:
    void backtrack(vector<int>& arr, int index, int current, vector<int>& ans)
    {
        if(index==arr.size())
        {
            ans.push_back(current);
            return;
        }
        backtrack(arr,index+1,current+arr[index],ans);
        backtrack(arr,index+1,current,ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        backtrack(arr,0,0,ans);
        return ans;
    }
};