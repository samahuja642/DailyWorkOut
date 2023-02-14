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
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool ans = false;
        for(ll i=0;i<n;i++){
            if(float(float(sum-a[i])/float(n-1))==a[i]){
                ans = true;
                break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}