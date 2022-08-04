class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int left = 0, right = 1;
        while (right < n)
        {
            if (s[left] == '.')
            {
                left++;
                right = left + 1;
                continue;
            }
            if (s[left] != s[right])
            {
                right++;
            }
            else
            {
                for (int i = right; i < n; i++)
                {
                    if (s[left] == s[i])
                        s[i] = '.';
                }
                left++;
                right = left + 1;
            }
        }
        if (s[left] != '.')
            return left;
        else
            return -1;
    }
};