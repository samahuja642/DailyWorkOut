#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abacabacaba";
    string pattern = "aba";
    vector<int>answer;
    for(int i=0;i<=s.length()-pattern.length();i++){
        bool ans = true;
        for(int j=0;j<pattern.length();j++){
            if(s[i+j]!=pattern[j]){
                ans = false;
                break;
            }
        }
        if(ans)answer.push_back(i);
    }
    for(auto it:answer){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}