#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        string keys;
        cin>>keys;
        unordered_map<char,int>corrValue;
        string word;
        cin>>word;
        ll ans = 0;
        for(ll i=0;i<keys.length();i++){
            corrValue[keys[i]] = i;
        }
        for(ll i=1;i<word.length();i++){
            ans+=abs(corrValue[word[i]]-corrValue[word[i-1]]);
        }
        cout<<ans<<endl;
    }
    return 0;
}