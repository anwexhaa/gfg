class Solution {
  public:
    int maxProduct(vector<int> &nums) {
        // code here
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int result=nums[0];
        
        for(int i=1;i<n;i++)
        {
            int temp=maxi;
            maxi=max({nums[i],nums[i]*maxi,nums[i]*mini});
            mini=min({nums[i],nums[i]*temp,nums[i]*mini});
            result=max(result,maxi);
        }
        return result;
    }
};