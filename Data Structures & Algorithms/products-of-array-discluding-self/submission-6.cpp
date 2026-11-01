class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        
        vector <int> ans(nums.size());
        ans[0]=1;
        for (int i = 1; i< nums.size(); i++){
            prefix *= nums[i-1]; 
            ans[i] = prefix;
        }
        
        cout << endl;
        ans[nums.size()-1]*=1;
        for (int i = nums.size()-2; i>=0; i--){
            suffix *= nums[i+1]; 
            ans[i] *= suffix;
        }
        return ans;
    }
};
