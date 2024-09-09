#include<bits/stdc++.h>
using namespace std;

void SortAns(vector<int> &a){
    int n = a.size();
    int x = 0;
    int y = 0;
    int z = n-1;
    while(x<=z){
        if(a[x]==0){
            swap(a[x],a[y]);
            x++;y++;
        }
        else if(a[x]==1){
            x++;
        }
        else{
            swap(a[x],a[z]);
            z--;
        }
    }
}

int main(){
    vector<int> arr = {0,1,2,1,0,2,1,0};
    SortAns(arr);
    for(auto i : arr){
        cout<<i;
    }
    return 0;
}