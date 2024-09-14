#include<bits/stdc++.h>
using namespace std;

//Brute Approach
// vector<vector<int>> SumZero(vector<int>&a){
//     int n = a.size();
//     vector<vector<int>> ans;

//     for(int i=0 ; i<n ; i++){
//         int sum = a[i];
//         if(sum==0){
//             vector<int> tuple = {i,i};
//             ans.push_back(tuple);
//         }
//         for(int j=i+1 ; j<n ; j++){
//             sum+=a[j];
//             if(sum==0){
//                 vector<int> tuple = {i,j};
//                 ans.push_back(tuple);
//             }
//         }
//     }
//     return ans;
// }

//Optimal
vector<vector<int>> SumZero(vector<int>&a){
    vector<vector<int>> ans;
    unordered_map<int,vector<int>> m;
    int pSum = 0;
    for(int i=0 ; i<a.size() ; i++){
        pSum += a[i];
        if(pSum==0){
            ans.push_back({0,i});
        }

        if(m.find(pSum)!=m.end()){
            vector<int> preIndex = m[pSum];
            for(auto x : preIndex){
                ans.push_back({x+1,i});
            }
        }
        m[pSum].push_back(i);
    }
    return ans;
}

int main(){
    vector<int> arr = {1, -1, 2, -2, 3, -3};
    vector<vector<int>>ans = SumZero(arr);
    for(auto a:ans){
        cout<<"(";
        for(auto i:a){
            cout<<i<<",";
        }cout<<"),";
    }
    return 0;
}