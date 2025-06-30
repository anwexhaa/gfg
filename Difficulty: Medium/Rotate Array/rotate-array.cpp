class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void reverse(vector<int>& arr,long long start, long long end)
    {
        while(start<=end)
        {
            long long temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
    }
};