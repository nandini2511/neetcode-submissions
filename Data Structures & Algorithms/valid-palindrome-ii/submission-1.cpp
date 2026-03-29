class Solution {
public:
    bool isPalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (!isalnum(s[i])) i++;
            else if (!isalnum(s[j])) j--;
            else if (tolower(s[i]) == tolower(s[j])) i++, j--;
            else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return (isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1));
            }
            i++, j--;
        }
        return true;
    }
};