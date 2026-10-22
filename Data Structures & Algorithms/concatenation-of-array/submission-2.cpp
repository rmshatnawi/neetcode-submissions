class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums ;
        // for (auto x : nums){
        //     ans.push_back(x);
        // }
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};