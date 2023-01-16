class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        vector<int> ans;
        vector<int> phash(26 , 0);
        vector<int> shash(26 ,0);
        int left = 0 , right = 0;
        while(right<p.size()){
            phash[p[right]-'a']++;
            shash[s[right]-'a']++;
            right++;
        }
        if(shash == phash){
            ans.push_back(left);
        }  
        while(right<s.size()){
            shash[s[left++]-'a']--;
            shash[s[right++]-'a']++;
            if(shash == phash){
                ans.push_back(left);
            }
        }
        return ans;
    }
};