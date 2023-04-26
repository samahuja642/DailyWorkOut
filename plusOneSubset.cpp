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
        ll a[n];
        ll mini = INT_MAX,maxi = INT_MIN;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        cout<<maxi-mini<<endl;
    }
    return 0;
}