#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a,ll b){return ((b==0)?a:gcd(b,a%b));}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n+1,0);
        vector<ll>prefix(n+1,0);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            prefix[i] = a[i] + prefix[i-1];
        }
        ll maxi = INT_MIN;
        for(ll i=1;i<n;i++){
            maxi = max(maxi,gcd(prefix[i],prefix[n]-prefix[i]));
        }
        cout<<maxi<<endl;
    }
    return 0;
}