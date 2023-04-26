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
    ll n;
    cin>>n;
    vector<vector<char>>grid(n+1,vector<char>(n+1));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<ll>>dp(n+1,vector<ll>(n+1));
    for(ll i=n;i>=1;i--){
        for(ll j=n;j>=1;j--){
            if(grid[i][j]=='*')dp[i][j] = 0;
            else if(i==n && j==n)dp[i][j] = 1;
            else {
                dp[i][j] = ((i==n?0:dp[i+1][j])%MOD + (j==n?0:dp[i][j+1])%MOD)%MOD;
            }
        }
    }
    cout<<dp[1][1]<<endl;
    return 0;
}