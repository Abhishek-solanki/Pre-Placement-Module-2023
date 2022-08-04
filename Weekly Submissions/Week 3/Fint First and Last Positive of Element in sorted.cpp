class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,n=nums.size(),h=n-1;
        while(l<h){
            int m=l+(h-l)/2;
            if(nums[m]>=target)
                h=m;
            else
                l=m+1;
        }
        if(n!=0 && nums[h]==target){
            int u=h+1;
            while(u<nums.size() && nums[u]==target) ++u;
            return {h,u-1};
        }
        else
            return {-1,-1};
    }
};