#include<bits/stdc++.h>
using namespace std;

int FirstK(vector<int> &a , int k){
    if(a.size()==0 || a.size()<k || k==0) return -1;
    if(k==1) return a[0];
    unordered_map<int,pair<int,int>> m;
    for(int i=0 ; i<a.size() ; i++){
        if(m.find(a[i])!=m.end()){
            m[a[i]].first++;
        }else{
            m[a[i]] = {1,i};
        }
    }
    int ans = INT_MAX;
    for(auto i: m){
        if(i.second.first==k && i.second.second<ans){
            ans = i.second.second;
        }
    }
    if(ans==INT_MAX) return -1;
    return ans;
}

int main(){
    vector<int> arr = {2, 3, 4, 2, 2, 5, 5};
    cout<<FirstK(arr,2);
    return 0;
}