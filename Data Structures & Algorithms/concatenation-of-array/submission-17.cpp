class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int original_size = nums.size();
        nums.reserve(nums.size() * 2); // prevents multiple reallocations: cuz reallocation is expensive 
        // nums.insert(nums.end(), nums.begin(), nums.begin() +    original_size);
        for (int i = 0; i< original_size; i++){
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};