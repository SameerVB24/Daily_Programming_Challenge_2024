#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> AngramAns(vector<string>&a){
    vector<vector<string>> ans ;
    if(a.size()<=1){
        ans.push_back(a);
        return ans;
    }
    unordered_map<int,vector<string>> m;
    for(auto word : a){
        int sum = 0;
        for(auto letter : word){
            sum+=letter;
        }
        m[sum].push_back(word);
    }
    for(auto i:m){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    vector<string> arr = {"abc", "bca", "cab", "xyz", "zyx", "yxz"};
    // vector<string> arr = {"abc", "def", "ghi"};

    vector<vector<string>> ans = AngramAns(arr);
    for(auto i : ans){
        cout<<"{";
        for(auto j : i){
            cout<<j<<",";
        }cout<<"},";
    }
    return 0;
}