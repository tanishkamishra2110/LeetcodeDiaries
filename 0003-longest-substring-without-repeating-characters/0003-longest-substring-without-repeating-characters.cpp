class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string subString = "";
        int longestLenghtSubstring = 0, n = s.size(), i = 0;
        while (i < n && (subString.size() + (n-i)) > longestLenghtSubstring)
        {
            if (subString.find(s[i]) >= 0 && subString.find(s[i]) < subString.size())
            {
                if (subString.size() > longestLenghtSubstring)
                    longestLenghtSubstring = subString.size();
                subString.clear();
                i = s.find(s[i]);
                s.replace(0, i+1, "");
                i = 0;
                n = s.size();
            }
            else
                subString.push_back(s[i++]);
        }
        if (subString.size() > longestLenghtSubstring)
            longestLenghtSubstring = subString.size();
        return longestLenghtSubstring;

    }
};