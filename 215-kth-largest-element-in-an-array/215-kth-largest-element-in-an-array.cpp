class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max, maxpos;
        int size = nums.size();
        while(k>0){
            max = -10000;
            for(int i=0; i<size; i++){
                if(max<nums[i]) {
                    max = nums[i];
                    maxpos = i;
                }  
            }
            nums[maxpos] = -10000;
            k--;
        }
        return max; 
    }
};