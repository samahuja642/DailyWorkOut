#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string heading,text;
    getline(cin,heading);
    getline(cin,text);
    unordered_map<char,int>HeadMap;
    unordered_map<char,int>TextMap;
    for(int i=0;i<heading.length();i++){
        HeadMap[heading[i]]++;
    }
    for(int i=0;i<text.length();i++){
        TextMap[text[i]]++;
    }
    bool ans = true;
    for(auto it:TextMap){
        if(it.first!=' ' && it.second > HeadMap[it.first]){ans = false;}
    }
    if(ans == false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}