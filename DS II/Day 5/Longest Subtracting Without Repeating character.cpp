class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;int t = 0,ans=0,n = s.size();
        for(int i = 0;i<n;i++){
            if(mp[s[i]]){
                int x = mp[s[i]];
                while(t<x) mp.erase(s[t++]);mp[s[i]]=i+1;
            }else  mp[s[i]]=i+1;
            
            ans = max(ans,i-t+1);
        }
        return ans;
    }
};