class Solution {
public:
     string expandAroundCenter(string& s, int left, int right) {
        int n = s.length();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        // Adjust left and right indices to get the palindrome substring
        left++;
        right--;
        return s.substr(left, right - left + 1);
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        string longest = "";

        for (int i = 0; i < n; i++) {
            // For odd-length palindromes
            string oddPalindrome = expandAroundCenter(s, i, i);
            // For even-length palindromes
            string evenPalindrome = expandAroundCenter(s, i, i + 1);

            // Update the longest palindrome found so far
            if (oddPalindrome.length() > longest.length()) {
                longest = oddPalindrome;
            }
            if (evenPalindrome.length() > longest.length()) {
                longest = evenPalindrome;
            }
        }

        return longest;
    }

};