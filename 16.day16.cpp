#include<bits/stdc++.h>
using namespace std;

int HCF(int n , int m){
    int res = min(n,m);
    while(res>0){
        if(n%res==0 && m%res==0){
            return res;
        }
        res--;
    }
    return 0;
}

long long int LCMans(int n , int m){
    if(n==m){
        return n;
    }
    if (n < m) {
        swap(n, m);
    }

    if(n%m==0){
        return n;
    }

    long long int ans = (long long int)n*m/HCF(n,m);
    return ans;    
}

int main(){
    int n = 123456 , m = 789012;
    cout<<LCMans(n,m);
    return 0;
}