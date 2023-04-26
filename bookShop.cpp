#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,x;
    cin>>n>>x;
    ll h[n+1],s[n+1];
    for(ll i=1;i<=n;i++){
        cin>>h[i];
    }
    for(ll i=1;i<=n;i++){
        cin>>s[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(x+1,0));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=x;j++){
            if(i==0 || j==0)dp[i][j] = 0;
            else dp[i][j] = max(((h[i]>j)?0:(s[i]+dp[i-1][j-h[i]])),(dp[i-1][j]));
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}