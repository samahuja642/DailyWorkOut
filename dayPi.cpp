#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string pi = "3141592653589793238462643383279";
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ans = 0;
        for(ll i=0;i<s.length();i++){
            if(s[i]==pi[i])ans++;
            else break;
        }   
        cout<<ans<<endl;
    }
    return 0;
}