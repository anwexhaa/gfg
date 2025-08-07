class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int start=0,end=n-1,mid=0;
        
        while(mid<=end)
        {
            if (arr[mid]<1)
            {
                swap(arr[start],arr[mid]);
                mid++;
                start++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[end],arr[mid]);
                end--;
            }
        }
    }
};