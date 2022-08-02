class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int lenghtOfnums = nums.size();
        vector<int> answer;
        for(int i=0;i<lenghtOfnums;i++){
            for(int j=i+1;j<lenghtOfnums;j++){
                if(nums[i]+nums[j]==target){
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        
        return answer;
    }
};