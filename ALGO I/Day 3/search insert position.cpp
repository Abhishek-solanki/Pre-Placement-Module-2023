class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        
         if(nums[size-1]<target){
            return size;
        }
        
        for(int i=0;i<size;i++){
            if(nums[i]==target){
                return i;
            }
        }
       
        for(int i=0;i<size;++i){
            if(nums[i]<target && nums[i+1]>target){
                return i+1;
            }
        }

        return 0;
    }
};