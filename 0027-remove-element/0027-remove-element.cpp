class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val) {
                swap(nums[i], nums[index]);
                index--;
                i--;
            }
            if(i==index) break;
        }
        return index+1;
    }
};