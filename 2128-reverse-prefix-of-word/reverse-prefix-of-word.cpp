class Solution {
public:
    string reversePrefix(string word, char ch) {
         int pos = word.find(ch);
        if (pos == -1) {
            return word;
        }
        
        int start = 0;
        while (start < pos) {
            char temp = word[start];
            word[start] = word[pos];
            word[pos] = temp;
            start++;
            pos--;
        }

        return word;
    }
};