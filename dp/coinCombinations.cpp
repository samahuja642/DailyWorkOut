#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,x;
    cin>>n>>x;
    ll c[n+1];
    for(ll i=1;i<=n;i++){
        cin>>c[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(x+1));
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=x;j++){
            if(j==0){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = ((i==1?0:dp[i-1][j])%MOD + (c[i]>j?0:dp[i][j-c[i]])%MOD)%MOD;
            }
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}