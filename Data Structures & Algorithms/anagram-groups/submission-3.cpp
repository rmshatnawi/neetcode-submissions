class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> strs_hash;
        for (const string& str : strs) {
            string sorted_key = str;
            sort(sorted_key.begin(), sorted_key.end());
            strs_hash[sorted_key].push_back(str);
        }
        vector<vector<string>> ans;
        ans.reserve(strs.size());
    
        for(const auto& [key, value] : strs_hash){
            ans.push_back(value);
        }   
        return ans; 
    }
};
