class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int>nums_map;
        nums_map.reserve(nums.size());
        for (auto x: nums){
            nums_map[x]++;
        }
        auto max_it =  max_element(nums_map.begin(),nums_map.end(),[](const auto& a, const auto& b) {
            return a.second < b.second; 
        });
        return max_it->first;
    }
};