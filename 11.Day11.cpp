#include<bits/stdc++.h>
using namespace std;

void PermutationAns(string a , vector<string> &ans , int i){
    if(i>=a.size()){
        ans.push_back(a);
        return;
    }
    for(int k=i ; k<a.size() ; k++){
        swap(a[i],a[k]);
        PermutationAns(a,ans,i+1);
        swap(a[i],a[k]);
    }
}

int main(){
    string s = "abc";
    vector<string> ans;
    PermutationAns(s,ans,0);
    for(auto i : ans){
        cout<<i<<",";
    }cout<<endl;
}