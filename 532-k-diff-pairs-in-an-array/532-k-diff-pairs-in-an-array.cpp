class Solution {
public:
int findPairs(vector<int>& nums, int k) {
    // Another appproach 
    if(k<0)
        return 0;
    unordered_map<int, int> m;
    for(int n : nums) 
        m[n]++;
    int count = 0;
    for(auto p:m){
        if((!k && p.second >1) || (k && m.count(p.first + k)))
            count++;
    }
    return count;
  }
};