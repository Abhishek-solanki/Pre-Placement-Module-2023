class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int result = 0;
        while(start<=end){
            int mid = start+(end-start)/2;
            bool flag = isBadVersion(mid);
            if(flag==true){
                result = mid;
                end=mid-1;
            }
            else
                start = mid+1;
        }
        return result;
    }
};