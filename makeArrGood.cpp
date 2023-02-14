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
        vector<pair<ll,ll>>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second = i;
        }
        sort(a.begin(),a.end());
        vector<pair<ll,ll>>operations;
        for(ll i=0;i<n;i++){
            if(((log(a[i].first)/log(2))-ll(log(a[i].first)/log(2)))!=0){
                ll change = pow(2,ceil(log(a[i].first)/log(2))) - a[i].first;
                a[i].first += change;
                operations.push_back({a[i].second+1,change});
            }
        }
        cout<<operations.size()<<endl;
        for(auto it:operations){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}