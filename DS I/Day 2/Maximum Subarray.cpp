class Solution {
public:
    int val = INT_MIN;
    int subArray(vector<int>&nums,int index){
        if(index==nums.size()){
            return INT_MIN;
        }
        
        int x = subArray(nums,index+1);
         int  y = nums[index] + max(0,x);
            
          val = max({val,x,y});    
        
        if(y>=0)return y;
            
      return INT_MIN; 
        
    }
    
    int maxSubArray(vector<int>& nums) {
        
        subArray(nums,0);
        return val;
    }
};