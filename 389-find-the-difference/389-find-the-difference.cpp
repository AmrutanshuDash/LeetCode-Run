class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = 0;
        int b = 0;
        for (auto c : s)
            a += c;
        for (auto c : t)
            b += c;
            
        return b - a;
    }
};