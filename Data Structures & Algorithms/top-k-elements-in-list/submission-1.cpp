class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> freq_vec;
        sort(nums.begin(), nums.end());
        if (!nums.empty()) {
        int current_num = nums[0];
        int current_count = 1;
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == current_num) {
                current_count++;
            } else {
                freq_vec.push_back({current_num, current_count});
                current_num = nums[i];
                current_count = 1;
            }
        }
        freq_vec.push_back({current_num, current_count}); 
        }
        sort(freq_vec.begin(), freq_vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; 
    });
    vector<int> ans;
    ans.reserve(k);
    
    for (int i = 0; i < k && i < freq_vec.size(); i++) {
        ans.push_back(freq_vec[i].first);
        // cout << freq_vec[i].first << " : " << freq_vec[i].second << endl;
    }
    return ans;
    }
};
