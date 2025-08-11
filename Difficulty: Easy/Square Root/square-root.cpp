class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n==0 || n==1) return n;
        int start=1,end=n,mid,ans=0;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            long long sum=mid*mid;
            if(sum==n) return mid;
            else if(sum<n)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};