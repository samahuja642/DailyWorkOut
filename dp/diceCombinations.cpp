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
    vector<ll>dp(n+1);
    dp[0] = 1;
    for(ll j=1;j<=n;j++){
        for(ll i=1;i<=6;i++){
            if(i>j)break;
            dp[j] = (dp[j]%MOD + dp[j-i]%MOD)%MOD; 
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}