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
        ll a,b;
        cin>>a>>b;
        ll n,m;
        cin>>n>>m;
        ll k = n/(m+1),q = n%(m+1);
        ll ans = 0;
        ans += min(k*(m+1)*b,k*m*a);
        ans += min(q*b,q*a);
        cout<<ans<<endl;
    }
    return 0;
}