class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        int suffex = 1;
        vector <int> pref_arr (nums.size());
        vector <int> suff_arr(nums.size());
        
        pref_arr[0]=1;
        for (int i = 1; i< nums.size(); i++){
            prefix *= nums[i-1]; 
            pref_arr[i] = prefix;
        }
        
        suff_arr[nums.size()-1]=1;
        for (int i = nums.size()-2; i>=0; i--){
            suffex *= nums[i+1]; 
            suff_arr[i] = suffex;
        }
        
        vector <int> ans(nums.size());
        for (int i = 0; i<nums.size(); i++){
            ans[i] = pref_arr[i] * suff_arr[i];
        }
        return ans;
    }
};
