class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> mp;
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for (auto i:mp){
            if(i.second == 1)
                return i.first;
            
        }
        return NULL;
    }
};