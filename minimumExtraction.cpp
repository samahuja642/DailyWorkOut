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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll maxi = a[0];
        ll change = 0;
        for(ll i=0;i<n-1;i++){
            maxi = max(maxi,(a[i]+change));
            change -= (a[i]+change);
        }
        maxi = max(maxi,(a[n-1]+change));
        cout<<maxi<<endl;
    }
    return 0;
}