class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> temp;
        for(auto i : nums1) temp[i]++;
        for(auto i : nums2) {
            if(temp[i] > 0) {
                res.push_back(i);
                temp[i] -= 1;
            }
        }
        return res;
    }
};