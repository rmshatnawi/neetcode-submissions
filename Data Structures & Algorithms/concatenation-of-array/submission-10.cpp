class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int lngth = nums.size();
        for (int i = 0; i<lngth;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};