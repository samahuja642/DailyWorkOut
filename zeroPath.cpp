#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

bool path(ll startx,ll starty,vector<vector<ll>>v,ll n,ll m,ll sum){
    if(startx==n-1 && starty==m-1){
        if(sum)return false;
        else return true;
    }
    bool ans = false;
    if(startx<n-1){ans |= path(startx+1,starty,v,n,m,sum+v[startx+1][starty]);}
    if(starty<m-1){ans |= path(startx,starty+1,v,n,m,sum+v[startx][starty+1]);}
    return ans;
}

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
        if(path(0,0,v,n,m,v[0][0])){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}