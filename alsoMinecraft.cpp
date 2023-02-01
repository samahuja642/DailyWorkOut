#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,m;
    cin>>n>>m;
    ll buildings[n+2];
    ll downstream[n+1];
    ll upstream[n+2];
    buildings[0] = 0;
    buildings[n+1] = 0;
    downstream[0] = 0;
    for(int i=1;i<n+1;i++){
        cin>>buildings[i];
        downstream[i] = downstream[i-1];
        if(buildings[i-1]>buildings[i]){
            downstream[i] += (buildings[i-1]-buildings[i]);
        }
    }
    upstream[n+1] = 0;
    for(int i=n;i>=1;i--){
        upstream[i] = upstream[i+1];
        if(buildings[i]<buildings[i+1]){
            upstream[i] += (buildings[i+1]-buildings[i]);
        }
    }
    while(m--){
        ll a,b;
        cin>>a>>b;
        if(a<b)cout<<downstream[b]-downstream[a]<<endl;
        else  cout<<upstream[b] - upstream[a]<<endl;
    }
    return 0;
}