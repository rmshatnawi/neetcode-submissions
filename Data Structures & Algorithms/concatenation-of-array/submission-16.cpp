class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int original_size = nums.size();
        nums.reserve(nums.size() * 2);
        nums.insert(nums.end(), nums.begin(), nums.begin() +    original_size);
        return nums;
    }
};