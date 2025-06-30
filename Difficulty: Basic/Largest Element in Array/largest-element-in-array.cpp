class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=max(arr[i],maxi);
            }
        }
        return maxi;
    }
};
