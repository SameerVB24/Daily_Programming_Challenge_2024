#include<bits/stdc++.h>
using namespace std;


vector<int> Solve(int n){
    if(n<=1){
        return {n};
    }
    vector<int> ans;
    for(long long int i = 2; i*i<=n; i++){
        while(n%i==0){
            n/=i;
            ans.push_back(i);
        }
    }
    if(n>1){
        ans.push_back(n);
    }
    return ans;
}

int main(){
    int n = 123456;
    vector<int>ans = Solve(n);
    for(auto i : ans){
        cout<<i<<",";
    }cout<<endl;
}