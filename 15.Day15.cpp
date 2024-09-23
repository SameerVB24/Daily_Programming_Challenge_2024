#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> m;
    int maxLen = 0, j = 0;

    for (int i = 0; i < s.length(); i++) {
        if (m.find(s[i]) != m.end() && m[s[i]] >= j) {
            j = m[s[i]] + 1;
        }
        m[s[i]] = i;
        maxLen = max(maxLen, i - j + 1);
    }

    return maxLen;
}

int main() {
    string s="abcabcbb";
    int res = lengthOfLongestSubstring(s);
    cout<< res << endl;
    return 0;
}
