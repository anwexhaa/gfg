class Solution {
  public:
     bool canAllocate(vector<int>&arr,int maxPages,int k)
    {
        int n=arr.size();
        int studentCount=1;
        int currentPages=0;
        for(int i=0;i<n;i++)
        {
            if(currentPages+arr[i]>maxPages)
            {
                studentCount++;
                currentPages=arr[i];
            }
            else
            {
                currentPages+=arr[i];
            }
        }
        return studentCount<=k;
    }
    int findPages(vector<int>&arr,int k)
    {
        int n=arr.size();
        if(k>n) return -1;
        int start=*max_element(arr.begin(),arr.end()),end=accumulate(arr.begin(),arr.end(),0),mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(canAllocate(arr,mid,k))
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return start;
    }
};