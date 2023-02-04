#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll sumDigits(ll val){
    ll ans = 0;
    while(val){
        ans += (val%10);
        val = val/10;
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
        ll n,q;
        cin>>n>>q;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        while(q--){
            ll choice;
            cin>>choice;
            if(choice==1){
                ll l,r;
                cin>>l>>r;
                for(ll i=l-1;i<r;i++){
                    a[i] = sumDigits(a[i]);
                }
            }
            else{
                ll index;
                cin>>index;
                cout<<a[index-1]<<endl;
            }
        }
    }
    return 0;
}