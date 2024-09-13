#include<bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int> &a){
    vector<int> ans;
    if(a.size()==1){
        ans.push_back(a[0]);
        return ans;
    }
    int n = a.size();
    ans.push_back(a[n-1]);
    int maxi = a[n-1];
    for(int i=n-2 ; i>=0 ; i--){
        if(a[i] > maxi){
            ans.insert(ans.begin(),a[i]);
            maxi = a[i];
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {100, 50, 20, 10};
    vector<int> ans = Leaders(arr);
    for(auto i : ans){
        cout<<i<<",";
    }cout<<endl;
    return 0;
}