class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // 1. Find the shortest word by reference (O(N) time, O(1) space)
    auto shortest_it = min_element(strs.begin(), strs.end(), 
        [](const string& a, const string& b) { return a.length() < b.length(); });
    const string& shortest_word = *shortest_it; 

    // 2. Vertical scanning loop
    for (size_t i = 0; i < shortest_word.size(); i++) {
        for (size_t j = 1; j < strs.size(); j++) {
            // If any character mismatches, return what we have so far
            if (strs[j][i] != strs[0][i]) {
                return shortest_word.substr(0, i);
            }
        }
    }
    return shortest_word;   
}
};