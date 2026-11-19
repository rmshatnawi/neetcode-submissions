class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> nums_hash;
        nums_hash.reserve(nums.size());
        for(int x: nums){
            if(nums_hash.contains(x)) return true;
            else nums_hash.insert(x);
        }
        return false;
    }
};