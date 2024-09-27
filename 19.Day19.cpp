#include <bits/stdc++.h>
using namespace std;

int f(const string& e) {
    stack<int> s;
    stringstream ss(e);
    string token;

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            if (token == "+") {
                s.push(a + b);
            } else if (token == "-") {
                s.push(a - b);
            } else if (token == "*") {
                s.push(a * b);
            } else if (token == "/") {
                s.push(a / b);
            }
        } else {
            s.push(stoi(token));
        }
    }
    return s.top();
}

int main() {
    string e = "15 7 1 1 + - / 3 * 2 1 1 + + -";
    cout <<f(e) << endl;
    return 0;
}
