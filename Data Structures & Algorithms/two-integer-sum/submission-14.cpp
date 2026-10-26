class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> tmp;
        for (int i = 0; i < nums.size(); i++) {
            tmp.push_back({nums[i], i});
        }
        sort(tmp.begin(), tmp.end());
        int pntr_l = 0, pntr_r = tmp.size()-1;
        while(pntr_l<pntr_r){
            int p_sum = tmp[pntr_l].first +tmp[pntr_r].first;
            if(p_sum==target)
                return {min(tmp[pntr_r].second,tmp[pntr_l].second),max(tmp[pntr_r].second,tmp[pntr_l].second)};
            if(p_sum > target)
                pntr_r--;
            else
                pntr_l++;
        }
    return{};
    }
};
