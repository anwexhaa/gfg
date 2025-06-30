class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> temp;
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        while(i<n && j<m)
        {
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
        
            if(a[i]<b[j])
            {
                temp.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j])
            {
                temp.push_back(b[j]);
                j++;
            }
            else
            {
                temp.push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<n)
        {
            if(i==0 || a[i]!=a[i-1])
            {
                temp.push_back(a[i]);
            }
            i++;
        }
        while(j<m)
        {
            if(j==0 || b[j]!=b[j-1])
            {
                temp.push_back(b[j]);
            }
            j++;
        }
        return temp.size();
    }
};