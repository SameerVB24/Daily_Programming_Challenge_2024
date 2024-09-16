#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    int i = 0, j = n - 1;
    
    while (i < n && s[i] == ' ') i++;
    while (j >= 0 && s[j] == ' ') j--;
    
    vector<string> w;
    string t;
    
    for (int k = i; k <= j; ++k) {
        if (s[k] != ' ') {
            t += s[k];
        } else if (t != "") {
            w.push_back(t);
            t = "";
        }
    }

    if (t != "") w.push_back(t);
    
    reverse(w.begin(), w.end());
    
    string r;
    for (int x = 0; x < w.size(); ++x) {
        r += w[x];
        if (x < w.size() - 1) r += " ";
    }
    
    return r;
}

int main() {
    string s = "the sky is blue";
    cout << reverseWords(s) << endl;
    return 0;
}
