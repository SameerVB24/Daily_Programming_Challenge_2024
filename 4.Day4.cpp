#include<bits/stdc++.h>
using namespace std;

void SortFun(vector<int>&a1 , vector<int>&a2){
    int i = 0;
    int j = 0;
    while(i<a1.size() && j<a2.size()){
        if(a1[i]>a2[j]){
            swap(a1[i],a2[j]);
            sort(a2.begin(),a2.end());
            i++;
        }
        else{
            i++;
        }
    }
}



int main(){
    vector<int> arr1 = {5};
    vector<int> arr2 = {1,2,3,4};
    SortFun(arr1,arr2);
    cout<<"arr1 :"; 
    for(auto i : arr1){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<"arr2 :";
    for(auto i : arr2){
        cout<<i<<",";
    }


}