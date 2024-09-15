#include<bits/stdc++.h>
using namespace std;

int TrapWater(vector<int> &a){
    if(a.size()<=0){
        return 0;
    }
    int n = a.size() , i =0 , j= n-1 , imax = 0 , jmax =0 , ans = 0;
    while(i<=j){
        if(a[i] < a[j]){
            if(a[i]<imax){
                ans += imax - a[i];
            }
            else{
                imax = a[i];
            }
            i++;
        }
        else{
            if(a[j]<jmax){
                ans += jmax - a[j];
            }
            else{
                jmax = a[j];
            }
            j--;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    cout<<TrapWater(arr);
    return 0;
}