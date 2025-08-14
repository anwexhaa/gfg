class Solution {
  public:
    string frequencySort(string &s) {
        // code here
        unordered_map<char,int>mp;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>mpp;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mpp.push_back({it->second, it->first});
        }
        sort(mpp.begin(),mpp.end());
        for(int i=0;i<mpp.size();i++)
        {
            ans.append(mpp[i].first,mpp[i].second);
        }
        return ans;
    }
};