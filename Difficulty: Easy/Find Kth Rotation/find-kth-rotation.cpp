class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int start=0,end=n-1,mid;
        
        while(start<=end)
        {
            if(arr[start]<=arr[end]) return start;
            mid=start+(end-start)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
            {
                return mid;
            }
            else if(arr[start]<=arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return 0;
    }
};
