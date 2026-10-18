class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        return false;
        unordered_map<char, int>mp{0};
        for(char i: s){
            mp[i]++;
        }

        for(char i: t){
            mp[i]--;
        }
        for(char i: s){
            if(mp[i] > 0)
            return false;
        }

        return true;
    }

};
