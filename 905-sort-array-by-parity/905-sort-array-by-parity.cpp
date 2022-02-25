class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int pos1=0, pos2=n-1;
        int tmp;
        while(nums[pos2]%2==1 && pos2>0) pos2--;
        cout<<"pos2:"<<pos2<<endl;
        while(pos1<pos2){
            if(nums[pos1]%2==0) pos1++;
            else{
                bool find = false;
                while(!find && pos2>pos1){
                    if(nums[pos2]%2==0){
                        cout<<"SWAP!!! pos1: "<<nums[pos1]<<", pos2:"<<nums[pos2]<<endl;
                        find = true;
                        tmp = nums[pos2];
                        nums[pos2] = nums[pos1];
                        nums[pos1] = tmp;
                        pos2--;
                    }
                    else pos2--;
                }
            }
        }
        return nums;
    }
};