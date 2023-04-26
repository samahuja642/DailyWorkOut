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
        vector<vector<ll>>v(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        vector<vector<pair<ll,ll>>>path(n,vector<pair<ll,ll>>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i==0 && j==0){
                    path[i][j].first = v[i][j];
                    path[i][j].second = v[i][j];
                }
                else if(i==0){
                    path[i][j].first = v[i][j] + path[i][j-1].first;
                    path[i][j].second = v[i][j] + path[i][j-1].second;
                }
                else if(j==0){
                    path[i][j].first = v[i][j] + path[i-1][j].first;
                    path[i][j].second = v[i][j] + path[i-1][j].second;
                }
                else{
                    path[i][j].first = v[i][j] + min(path[i-1][j].first,path[i][j+1].first);
                    path[i][j].second = v[i][j] + max(path[i-1][j].second,path[i][j+1].second);
                }
            }
        }
        bool ans = false;
        for(ll i=path[n-1][m-1].first;i<=path[n-1][m-1].second;i+=2){
            if(i==0){
                ans = true;
                break;
            }
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}