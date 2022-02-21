class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        int res = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > (nums.size()/2)){
                res = nums[i];
                break;
            }
        }
        return res;
    }
};