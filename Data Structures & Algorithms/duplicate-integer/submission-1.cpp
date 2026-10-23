class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_map<std::string, int> ageMap 
        unordered_set<int> nums_set;
        nums_set.reserve(nums.size());
        for (auto x: nums){
            // nums_set[x]++;
            // if (nums_set[x]>1){
            if(!nums_set.insert(x).second){
                return true;
            }
        }
        return false;
    }
};