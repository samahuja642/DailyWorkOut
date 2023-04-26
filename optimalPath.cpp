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
        ll n,m;
        cin>>n>>m;
        ll ans = (m*(m+1))/2 - m;
        // cout<<ans<<endl;
        ans += (m*n*(n+1))/2;
        // cout<<(n*m*(m+1))/2<<endl;
        cout<<ans<<endl;
    }
    return 0;
}