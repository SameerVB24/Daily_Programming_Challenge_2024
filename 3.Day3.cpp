#include<bits/stdc++.h>
using namespace std;


int DuplicateAns(vector<int>&a){
    if(a.size()==1 || a.size()==0){
        return -1;
    }

    int s = a[0];
    int f = a[0];
    do
    {
        s=a[s];
        f=a[a[f]];
    } while (s!=f);
    s = a[0];
    while(s!=f){
        s=a[s];
        f=a[f];
    }
    return f;
}


int main(){
    vector<int>arr = {1,4,4,2,3};
    cout<<DuplicateAns(arr);
    return 0;
}