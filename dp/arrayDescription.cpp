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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>dp(n+2,vector<ll>(m+2,0));
    vector<ll>x(n+1);
    for(ll i=1;i<=n;i++){
        cin>>x[i];
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(i==1){
                dp[i][j] = (dp[i][j]%MOD+((x[i]==j || x[i]==0)?1:0))%MOD;
            }
            else{
                if(x[i]==0||x[i]==j)dp[i][j] = ((dp[i-1][j-1] + dp[i-1][j])%MOD + dp[i-1][j+1])%MOD;
                else dp[i][j] = 0;
            }
        }
    }
    ll sum = 0;
    for(ll i=1;i<=m;i++){
        sum = (sum + dp[n][i])%MOD;
    }
    cout<<sum<<endl;
    return 0;
}