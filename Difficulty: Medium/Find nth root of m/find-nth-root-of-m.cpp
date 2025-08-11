class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int start=1,end=m;
        long long mid;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            long long root=pow(mid,n);
            if(root==m) return mid;
            else if(root<m)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};