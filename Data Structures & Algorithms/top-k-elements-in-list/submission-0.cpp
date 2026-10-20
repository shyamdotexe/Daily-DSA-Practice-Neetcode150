class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for(auto& p : mp) {
            freq.push_back({p.second, p.first});
        }
        sort(freq.rbegin(), freq.rend());
        for(int i = 0; i < k; i++) {
            result.push_back(freq[i].second);
        }
        return result;
    }
};
