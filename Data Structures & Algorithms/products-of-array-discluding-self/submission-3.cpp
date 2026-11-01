class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> sol;
        sol.reserve(nums.size());

        int nums_product = 1;
        bool zero = false;
        int zerocount = 0;
        
        for (int x: nums){
            if(x==0) {
                zero = true; 
                zerocount++; 
                continue;
                }
            nums_product *= x;
        }
        if (zerocount > 1) {
            nums_product = 0;
        }
        for(int x: nums){
            if(!zero) {
                sol.push_back(nums_product/x);
            }
            else if(x==0){
                sol.push_back(nums_product);
            }
            else {
                sol.push_back(0);
            }
        }
        return sol;
    }
};
