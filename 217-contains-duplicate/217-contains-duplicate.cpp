class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i])==m.end())
                m.insert(make_pair(nums[i],0));
            else return true;
        }
        return false;
    }
};