class Solution {
public:
    bool isAnagram(string s, string t) {
        auto fast_io = []() {
            std::ios_base::sync_with_stdio(false); // Disconnects C++ streams from C streams
            std::cin.tie(NULL);                    // Unties cin from cout to prevent constant flushing
            return 0;
        }();

        if(s.length()!=t.length())
            return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s == t;
    }
};
