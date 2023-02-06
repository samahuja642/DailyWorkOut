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
        ll n,k;
        cin>>n>>k;
        ll p[n];
        ll sorted[n];
        for(ll i=0;i<n;i++){
            cin>>p[i];
            sorted[i] = p[i];
        }
        sort(sorted,sorted+n);
        ll new_n = n;
        ll ptr = 0;
        for(ll i=0;i<n;i++){
            if(sorted[ptr]==p[i]){
                ptr++;
                new_n--;
            }
        }
        cout<<ceil(float(new_n)/float(k))<<endl;
    }
    return 0;
}