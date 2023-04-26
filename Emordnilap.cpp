#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

#define MOD 1000000007

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    vector<ll>fact(200000);
    fact[0] = 1;
    for(ll i=1;i<200000;i++){
        fact[i] = (fact[i-1]%MOD * i%MOD)%MOD;
    }
    while(t--){
        ll n;
        cin>>n;
        cout<<(((n%MOD * (n-1)%MOD)%MOD) * fact[n]%MOD)%MOD<<endl;
    }
    return 0;
}