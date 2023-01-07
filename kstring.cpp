#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    string ans;
    int n = s.length()/k;
    unordered_map<char,int>count;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(auto it=count.begin();it!=count.end();it++){
        if(it->second%n!=0){
            cout<<-1<<endl;
            return 0;
        }
        int rep = it->second/n;
        while(rep--){
            ans.push_back(it->first);
        }
    }
    n--;
    while(n--){
        ans+=ans;
    }
    cout<<ans<<endl;
    return 0;
}