// User function Template for C++

class Solution {
  public:
    void backtrack(vector<string>& ans, string current, int num)
    {
        if(current.size()==num)
        {
            ans.push_back(current);
            return;
        }
        backtrack(ans,current + "0",num);
        if(current.empty() || current.back()!='1')
        {
            backtrack(ans,current + "1",num);
        }
        
    }
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        vector<string>ans;
        backtrack(ans,"",num);
        return ans;
    }
};