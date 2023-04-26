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
        ll p[n];
        ll count = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2)count++;
            if(i==0){
                p[i] = a[i]==1?0:1;
            }
            else p[i] = p[i-1] + (a[i]==1?0:1);
        }
        ll ans = -2;
        for(int i=0;i<n;i++){
            if(p[i]==count-p[i]){
                ans = i;
                break;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}