class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int lngth = nums.size();
        int original_size = nums.size();
        nums.reserve(nums.size() * 2);
        for (int i = 0; i<original_size;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};