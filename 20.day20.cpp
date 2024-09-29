#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int x) {
    if (s.empty() || s.top() <= x) {
        s.push(x);
        return;
    }
    int t = s.top();
    s.pop();
    insertSorted(s, x);
    s.push(t);
}

void sort(stack<int> &s) {
    if (s.empty()) {
        return;
    }
    int t = s.top();
    s.pop();
    sort(s);
    insertSorted(s, t);
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    s.push(5);

    sort(s);
    //will be printed in Decending order as answer is stacked in ascending order
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
