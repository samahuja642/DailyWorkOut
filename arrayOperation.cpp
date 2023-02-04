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
        ll arr[n];
        ll ans = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-2*k;i++){
            ans+=arr[i];
        }
        for(int i=n-2*k;i<n-k;i++){
            ans+=(arr[i]/arr[i+k]);
        }
        cout<<ans<<endl;
    }
    return 0;
}