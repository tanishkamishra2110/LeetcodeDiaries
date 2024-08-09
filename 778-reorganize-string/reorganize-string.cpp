class Solution {
public:
    string reorganizeString(string s) {
       int arr[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a']++;
        }
        // step 2
        char max_freq_char;
        int max_freq = INT_MIN;
        for (int i = 0; i < 26; i++) {
            if (arr[i] > max_freq) {
                max_freq = arr[i];
                max_freq_char = i + 'a';
            }
        }
        // step 3
        int index = 0;
        while (index < s.size() && max_freq > 0) {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }
        if (max_freq != 0) {
            return "";
        }
        arr[max_freq_char - 'a'] = 0;
        // step 4
        for (int i = 0; i < 26; i++) {
            while (arr[i] > 0) {
                index = (index >= s.size()) ? 1 : index;
                s[index] = i + 'a';
                arr[i]--;
                index += 2;
            }
        }
        return s;
    }
};