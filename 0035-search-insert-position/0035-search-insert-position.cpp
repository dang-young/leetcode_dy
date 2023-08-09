class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        int mid;
        while(start<end) {
            mid = (start + end)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start = mid;
            else end = mid;
            if(end-start==1) break;
        }
        if(nums[start]>=target) return start;
        if(nums[end]==target) return end;
        if(nums[end]<target) return end+1;
        return end;
    }
};