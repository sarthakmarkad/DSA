class Solution {
public:
    bool helper(int left, int right, string &s) {
        if (left >= right) return true;

        while (left < right && !isalnum(s[left]))
            left++;

        while (left < right && !isalnum(s[right]))
            right--;

        if (tolower(s[left]) != tolower(s[right]))
            return false;

        return helper(left + 1, right - 1, s);
    }

    bool isPalindrome(string s) {
        return helper(0, s.size() - 1, s);
    }
};