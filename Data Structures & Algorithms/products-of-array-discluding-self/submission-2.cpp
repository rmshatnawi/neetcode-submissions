class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector <int> sol;
        bool zro = false;
        int zrocnt = 0;
        sol.reserve(nums.size());
        for (int x: nums){
            if(x==0) {zro = true; zrocnt++; continue;}
            prod *= x;
        }
        if (zrocnt > 1) prod = 0;
        for(int x: nums){
            if(!zro) {sol.push_back(prod/x);}
            else if(x==0){sol.push_back(prod);}
            else {sol.push_back(0);}
        }
        
        return sol;
    }
};
