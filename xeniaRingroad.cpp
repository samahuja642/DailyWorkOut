#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,m;
    cin>>n>>m;
    ll a[m];
    ll curr = 1;
    ll ans = 0;
    for(ll i=0;i<m;i++){
        cin>>a[i];
        if(curr!=a[i]){
            if(curr>a[i]){
                ans+=(n - curr + a[i]);
            }
            else{
                ans+=(a[i]-curr);
            }
        }
        curr=a[i];
    }
    cout<<ans<<endl;
    return 0;
}