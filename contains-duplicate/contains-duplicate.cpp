class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==x)
                return true;
            else
                x=nums[i];
        }
        return false;
    }
};