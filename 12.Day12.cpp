#include<bits/stdc++.h>
using namespace std;

bool validParenthesis(string s){
    if(s.size()==0) return true;
    if(s.size()%2!=0) return false;
    stack<char> k;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if((ch=='(') || (ch=='[') || (ch=='{')){
                k.push(ch);
            }
            else{
                if(!k.empty()){
                    char top = k.top();
                    if( (ch==')'&&top=='(') || (ch==']'&&top=='[') || (ch=='}'&&top=='{') ){
                        k.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(k.empty()){
            return true;
        }
        return false;
}

int main(){
    string s ="([)]";
    if(validParenthesis(s)){
        cout<<"Valid";
    }else{
        cout<<"Not Valid";
    }
}