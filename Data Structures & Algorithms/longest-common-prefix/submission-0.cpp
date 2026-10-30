class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // for ( auto x: strs)
        if (strs.empty()) return "";
        if (strs.size()==1) return strs[0];
        if (strs[1][0]!=strs[0][0]) return "";

        auto shortest_it = min_element(strs.begin(), strs.end(), 
            [](const string& a, const string& b) {
                return a.length() < b.length();
            });
        string shortest_word = *shortest_it;
        size_t index = distance(strs.begin(), shortest_it);
        // cout << "Shortest string: " << shortest_word << "\n";
        string ans = "";
        for ( int i = 0; i< shortest_word.size(); i++){
            for (int j = 1; j< strs.size(); j++){
                if(strs[j][i]!=strs[j-1][i]) return ans;
            }
            ans += shortest_word[i];
        }
        return ans;   
    }
};