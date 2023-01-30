#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string s;
    cin>>s;
    string ans;
    bool done = false;
    for(int i=0;i<26;i++){
        for(int j=0;j<s.length();j++){
            if(char('z'-i)==s[j]){
                done = true;
                ans.push_back(s[j]);
            }
        }
        if(done==true)break;
    }
    cout<<ans<<endl;
    return 0;
}