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
        vector<bool>done(n+1,false);
        vector<ll>a(n);
        bool ans = true;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++){
            if(a[i]<=n && !done[a[i]]){
                done[a[i]] = true;
                continue;
            }
            while(a[i]>n){
                a[i] /= 2;
            }
            while(a[i] && done[a[i]]){
                a[i] /= 2;
            }
            if(!a[i]){ans = false;break;}
            done[a[i]] = true;
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}