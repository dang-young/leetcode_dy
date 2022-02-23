class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        bool exist[nums.size()];
        
        for(int i=0; i<nums.size(); i++)
            exist[i]=false;
        
        for(int i=0; i<nums.size(); i++)
            exist[nums[i]-1] = true;
        
        for(int i=0; i<nums.size(); i++){
            if(exist[i]!=true) v.push_back(i+1);
        }
        
        return v;
    }
};