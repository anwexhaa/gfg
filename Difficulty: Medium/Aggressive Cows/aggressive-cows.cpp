class Solution {
  public:
    bool distance(vector<int> &stalls, int dist, int cows)
    {
        int cowCount=1;
        int last=stalls[0];
        int n=stalls.size();
        for(int i=1;i<n;i++)
        {
            if(stalls[i]-last>=dist)
            {
                cowCount++;
                last=stalls[i];
            }
            if(cowCount>=cows) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int start=1, end=stalls[n-1]-stalls[0], mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(distance(stalls,mid,k)==true)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return end;
        
    }
};