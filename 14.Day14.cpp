#include <bits/stdc++.h>
using namespace std;

int f(string& s, int k) {
    int n = s.size();
    int l = 0, r = 0;
    unordered_map<char, int> m;
    int c = 0;

    while (r < n) {
        m[s[r]]++;
        
        while (m.size() > k) {
            m[s[l]]--;
            if (m[s[l]] == 0) {
                m.erase(s[l]);
            }
            l++;
        }
        
        c += r - l + 1;
        r++;
    }

    return c;
}

int g(string s, int k) {
    return f(s, k) - f(s, k - 1);
}

int main() {
    string s = "pqpqs";
    int k = 2;
    cout << g(s, k) << endl;
    return 0;
}
