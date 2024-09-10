#include<bits/stdc++.h>
using namespace std;

int MissingNo(vector<int>&a){
    int n = a.size()+1;
    int total = (n*(n+1))/2;
    int sum =0;
    for(auto i : a){
        sum+=i;
    }
    return total-sum;
}

int main(){
    vector<int> arr = {1,2,4,5};
    cout<<MissingNo(arr)<<endl;
    return 0;
}