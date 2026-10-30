class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(), nums.end());
    int k = 0;
    
    auto it = find(nums.begin(), nums.end(), val);
    
    while (it != nums.end() && *it == val) {
        it = nums.erase(it); 
        k++;
    }
    
    return nums.size(); 
}
};