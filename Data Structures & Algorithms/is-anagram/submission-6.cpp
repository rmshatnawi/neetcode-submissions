class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        int alphabet_counts [26] = {0};

        for (size_t i = 0; i < s.length(); ++i){
            alphabet_counts[s[i] - 'a']++;
            alphabet_counts[t[i] - 'a']--;
        }
        for (int count : alphabet_counts) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};
