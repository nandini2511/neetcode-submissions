class Solution {
public:
    //using hashmap
    // bool isAnagram(string s, string t) {
    //     if (s.length() != t.length()) return false;

    //     unordered_map<char, int> char_map;
    //     for (int i = 0; i < s.length(); i++) {
    //         char_map[s[i]]++;
    //         char_map[t[i]]--;
    //     }
    //     for (auto& [ch, count]: char_map) {
    //         if (count != 0) return false;
    //     }
    //     return true;
    // }

    //using vector
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> char_map(26, 0);
        for (int i = 0; i < s.length(); i++) {
            char_map[s[i] - 'a']++;
            char_map[t[i] - 'a']--;
        }
        for (auto& count: char_map) {
            if (count != 0) return false;
        }
        return true;
    }
};
