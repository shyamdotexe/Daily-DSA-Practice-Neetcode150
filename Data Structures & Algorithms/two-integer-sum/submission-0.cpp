class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> seen;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];

            if(seen.count(complement) && seen[complement] != i){
               return i < seen[complement]? vector<int>{i, seen[complement]} : vector<int>{seen[complement], i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};
