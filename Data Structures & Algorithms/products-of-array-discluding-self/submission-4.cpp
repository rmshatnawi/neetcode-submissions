class Solution {
public:
    vector<int> productExceptSelf(const vector<int>& nums) { // Added const
        int total_product = 1;
        int zero_count = 0;

        for (int x : nums) {
            if (x == 0) {
                zero_count++;
            } else {
                total_product *= x;
            }
        }

        vector<int> sol(nums.size(), 0); // Pre-fill with 0 to handle zero_count > 1 automatically

        // Case 1: More than one zero means everything becomes 0
        if (zero_count > 1) {
            return sol; 
        }

        // Case 2 & 3: Handle exactly one zero or no zeros outside the main loop structure
        for (int i = 0; i < nums.size(); ++i) {
            if (zero_count == 1) {
                sol[i] = (nums[i] == 0) ? total_product : 0;
            } else {
                sol[i] = total_product / nums[i];
            }
        }

        return sol;
    }
};
