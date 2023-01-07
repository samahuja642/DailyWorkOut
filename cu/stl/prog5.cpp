#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

// bool comp(pair<char,int> &a,pair<char,int> &b){
//     if(a.second==b.second){
//         return a.first <= b.first; 
//     }
//     return a.second > b.second;
// }

int main(){
    unordered_map<char,int> countt;
    string str = "samarthahuja";
    for(int i=0;i<str.length();i++){
        countt[str[i]]++;
    }
    sort(countt.begin(),countt.end());
    for(auto it=countt.begin();it!=countt.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}