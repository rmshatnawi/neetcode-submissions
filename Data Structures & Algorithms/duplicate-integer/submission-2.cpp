class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> nums_hash;
        nums_hash.reserve(nums.size());
        for (int x: nums){
            nums_hash[x]++;
            if(nums_hash[x]>1) return true;
        }
        return false;
    }
};