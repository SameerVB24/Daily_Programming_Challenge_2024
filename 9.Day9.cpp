#include<bits/stdc++.h>
using namespace std;

string PreAns(vector<string> &a){
    if(a.size()==1){
        return a[0];
    }
    string ans = "";
    int i=0;
    string ele1 = a[0];
    string ele2 = a[1];
    while(i<ele1.size() && i<ele2.size()){
        if(ele1[i]==ele2[i]){
            ans.push_back(ele1[i]);
            i++;
        }else{
            break;
        }
    }
    if(ans.size()==0){
        return ans;
    }

    i = 2;
    while(i<a.size()){
        if(a[i].empty()){
            return ans = "";
        }
        string ele = a[i];
        int anSize = ans.size();
        if(ans != ele.substr(0,anSize)){
            int k = ans.size()-1;
            while(ans[k]!=ele[k]){
                ans.pop_back();
                k--;
            }
            if(ans.empty()){
                return ans;
            }
        }
        i++;
    }
    return ans;
}




int main(){
    // vector<string> arr = {"floiwer", "floiw", "floight","Sameer"};
    vector<string> arr = {"floiwer", "floiw", "floight",};
    // vector<string> arr = {""};
    cout<<PreAns(arr);//Returns Empty string if No Answer Found
    return 0;
}