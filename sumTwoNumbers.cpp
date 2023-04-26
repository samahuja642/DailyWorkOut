#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll sumi(ll a){
    ll ans; 
    while(a){
        ans += (a%10);
        a /= 10;
    }
    return ans;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%10==9){
            bool pref1 = true;
            ll x = 0;
            ll y = 0;
            ll multiplier = 1;
            while(n){
                x+=(!pref1)?(multiplier*ll((n%10)/(float)2)):(multiplier*ll(ceil((n%10)/(float)2)));
                y+=(pref1)?(multiplier*ll((n%10)/(float)2)):(multiplier*ll(ceil((n%10)/(float)2)));
                n = n/10;
                multiplier *= 10;
                if(n&1)pref1 = !pref1;
            }
            cout<<x<<" "<<y<<endl;
        }
        else{
            if(n&1)cout<<ll(n/2)<<" "<<ll(n/2+1)<<endl;
            else cout<<ll(n/2)<<" "<<ll(n/2)<<endl;
        }
    }
    return 0;
}