class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_map<std::string, int> ageMap 
        unordered_map<int,int> nums_map;
        // int i = 0; i< nums.size();i++
        for (auto x: nums){
            nums_map[x]++;
            if (nums_map[x]>1){
                return true;
            }
        }
        return false;
    }
};