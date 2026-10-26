class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> nums_map;
        for (int i = 0; i< nums.size(); i++){
            nums_map[nums[i]].push_back(i);
        }
        vector <int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        int pntr_l = 0, pntr_r = tmp.size()-1;
        for (int i = 0; i< tmp.size(); i++){
            int p_sum = tmp[pntr_l]+tmp[pntr_r];
            if(p_sum==target)
            {
                if (tmp[pntr_r]==tmp[pntr_l])
                    return {nums_map[tmp[pntr_r]][0],nums_map[tmp[pntr_r]][1]};
                else
                     {
                         if(nums_map[tmp[pntr_l]][0]>nums_map[tmp[pntr_r]][0])
                             return {nums_map[tmp[pntr_r]][0],nums_map[tmp[pntr_l]][0]};
                        else
                             return {nums_map[tmp[pntr_l]][0],nums_map[tmp[pntr_r]][0]};
                    }
            }
            if(p_sum>target)
                pntr_r--;
            else 
                pntr_l++;
        }
    return{};
    }
};
