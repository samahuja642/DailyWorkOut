#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

// Possible Hack 3 2 which can be wrong in some way

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        vector<ll>ans;
        for(ll i=y;i<=x;i++){
            ans.push_back(i);
        }
        for(ll i=x-1;i>y;i--){
            ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}