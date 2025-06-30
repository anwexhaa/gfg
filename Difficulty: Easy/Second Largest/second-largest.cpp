class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int first=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>first)
            {
                first=max(arr[i],first);
            }
        }
        int second=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=first)
            {
                second=max(arr[i],second);
            }
        }
        return second;
    }
};