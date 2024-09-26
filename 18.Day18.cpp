#include<bits/stdc++.h>
using namespace std;

int Factor(int n){
    if(n==0) return 0;
    int i=1;
    int ans=0;
    while(i<=n){
        if(n%i==0){
            ans++;
        }
        i++;
    }
    return ans;
}

int main(){
    cout<<Factor(12);
    return 0;
}