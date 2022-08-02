class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        unordered_map<int, int> m;
        for (int i = 0, n = nums.size(); i < n; i++) {
            if (m.find(nums[i]) != m.end()) {
                ans = true;
                break;
            }
            m.insert({nums[i], i});
        }
        return ans;
    }
};