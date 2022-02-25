class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int pos1=0, pos2=n-1;
        int tmp;
        while(pos2>0 && nums[pos2]%2==1) pos2--;
        while(pos1<n && nums[pos1]%2==0) pos1++;

        while(pos1<pos2){
            if(nums[pos1]%2==0) pos1++;
            else{
                while(pos2>pos1){
                    if(nums[pos2]%2==0){
                        tmp = nums[pos2];
                        nums[pos2] = nums[pos1];
                        nums[pos1] = tmp;
                        pos2--;
                        break;
                    }
                    else pos2--;
                }
            }
        }
        return nums;
    }
};