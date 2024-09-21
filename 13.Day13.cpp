#include<bits/stdc++.h>
using namespace std;

string Palindrome(string s , int i , int j){
    while(i>=0 && j<s.size() && s[i]==s[j]){
        i--;
        j++;
    }
    return s.substr(i+1,j-i-1);
}

string Solve(string s) {
    if(s.size()==1){
        return s;
    }
    string ans = "";
    for(int i= 0 ; i<s.size() ; i++){
        string odd = Palindrome(s,i,i);
        string even = Palindrome(s,i,i+1);
        if(odd.size()>even.size()){
            if(odd.size()>ans.size()){
                ans = odd;
            }
        }
        if(even.size()>ans.size()){
            ans = even;
        }
    }
    return ans;
}

int main(){
    string s = "babad";
    string ans = Solve(s);
    cout<<ans;
    return 0;
}