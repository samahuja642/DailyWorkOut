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
        string str;
        cin>>str;
        ll opening = 0,closing = 0;
        for(ll i=0;i<str.length();i++){
            if(str[i]=='(')opening++;
            else if(str[i]==')')closing++;
        }
        ll a = str.length()/2 - opening;
        ll b = str.length()/2 - closing;
        if(a>=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}