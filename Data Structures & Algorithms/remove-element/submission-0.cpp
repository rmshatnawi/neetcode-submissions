class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(), nums.end());
    int k = 0;
    
    auto it = find(nums.begin(), nums.end(), val);
    
    // As long as the iterator is valid and points to the target value
    while (it != nums.end() && *it == val) {
        it = nums.erase(it); // erase() safely removes the item and returns the NEXT valid iterator!
        k++;
    }
    
    return nums.size(); // The new size of the vector is exactly your answer
}
};