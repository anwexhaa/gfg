class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int maxi=0;
        int mini=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};
