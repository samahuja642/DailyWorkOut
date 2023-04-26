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
        ll n;
        cin>>n;
        vector<ll>l(n),r(n),cost(n);
        for(ll i=0;i<n;i++){
            cin>>l[i];
            cin>>r[i];
            cin>>cost[i];
        }
        ll left=l[0],right=r[0],miniCost=cost[0];
        for(ll i=1;i<n;i++){
            left = min(l[i],left);
            right = max(r[i],right);
            
        }
    }
    return 0;
}