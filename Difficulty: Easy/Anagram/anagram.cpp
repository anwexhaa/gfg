class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()) return false;
        int freq[26]={0};
        
        for(int i=0;i<s1.size();i++)
        {
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            return false;
        }
        return true;
    }
};