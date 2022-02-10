class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int sum = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum == k)
                cnt++;
            
            if(m.find(sum-k) != m.end())
                cnt = m[sum-k] + cnt;
            
            if(m.find(sum) != m.end())
                m[sum]++;
            else 
                m[sum]=1;
        }
        return cnt;
    }
};