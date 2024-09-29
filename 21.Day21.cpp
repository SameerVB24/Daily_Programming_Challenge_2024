#include<bits/stdc++.h>
using namespace std;

void Bottom(int ele, stack<int>&s){
    if(s.size()==0){
        s.push(ele);
        return;
    }
    int m = s.top();
    s.pop();
    Bottom(ele,s);
    s.push(m);
}

void Rev(stack<int>&s){
    if(s.empty()){
        return;
    }
    if(s.size()==1){
        return;
    }
    int ele = s.top();
    s.pop();
    Rev(s);
    Bottom(ele,s);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    Rev(s);
    //Answer is Printed in reverse order
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}