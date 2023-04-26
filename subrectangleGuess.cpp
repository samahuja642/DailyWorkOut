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
        ll a[n][m];
        ll x,y,maxi = INT_MIN;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]>maxi){
                    maxi = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
        cout<<max(x+1,n-x)*max(y+1,m-y)<<endl;
    }
    return 0;
}