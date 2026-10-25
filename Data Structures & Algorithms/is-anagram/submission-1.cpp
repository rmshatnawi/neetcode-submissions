class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        unordered_map <char,int> chracter_count;
        chracter_count.reserve(s.length());

        for (char x: s){
            chracter_count[x]++;
        }
        for (char x: t){
            chracter_count[x]--;

            if(chracter_count[x] < 0)
                return false;
        }
        return true;
    }
};
