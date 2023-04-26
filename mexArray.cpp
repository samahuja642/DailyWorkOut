#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll>prefixMEX(n);
        if(a[0]==0)prefixMEX[0] = 1;
        else prefixMEX[0] = a[0] - 1;
        for(ll i=1;i<n;i++){
            prefixMEX[i] = 
        }
    }
    return 0;
}